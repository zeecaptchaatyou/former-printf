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
	va_start(args, format);

	while (format != NULL)
	{
		if (format[i] != '%')
		{
			printf("%c", format);
			i++;
		}
		else
		{
			format++;

		if (*format == '%')
		
		{
			printf("%%");
			i++;
		}
		else if (*format == 'c')
		{
			char c = va_arg(args, char);
			printf("%c", c);
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
			printf("%%");
			printf("%c", format);
			i += 2;
		}
		}
		format++;
	}
	va_end(args);
	return (i);
}
