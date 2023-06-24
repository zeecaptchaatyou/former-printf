#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - ...
 * @format: ...
 *
 * Return: ...
 */
int _printf(const char *format, ...)
{
	int i = 0;
	va_list args;

	while (format != NULL)
	{
		if (format[i] != '%')
		{
			printf("%s", format);
			i++;
		}
		else
		{
			format++;
		}

		if (*format == '%')
		
		{
			printf("%");
			i++;
		}
		else if (*format == 'c')
		{
			char c = va_arg(args, int);
			printf("%d", c);
			i++;
		}
		else if (*format == 's')
		{
			char *str = va_arg(args, char*);
			while (*str != '\0')
			{
				printf("%s", str);
				i++;
				str++;
			}
		}
		else if (*format == 'd' || *format == 'i')
		{
			int num = va_arg(args, int);
			printf("%d", num);
			i++;
		}
		else 
		{
			printf("%");
			printf("%s", format);
			i += 2;
		}
	}
	format++;
	va_end(args);
	return (i);
}
