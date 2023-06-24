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

	while (format && format[i] != '\0')
	{
		if (format[i] != '%')
		{
			printf("%c", format[i]);
			i++;
		}
		else
		{
			i++;
			if (format[i] == '%')
		
			{	
				printf("%%");
				i++;
			}
			else if (format[i] == 'c')
			{
				int c = va_arg(args, int);
				printf("%c", (char)c);
				i++;
			}
			else if (format[i] == 's')
			{
				char *str = va_arg(args, char*);
				while (*str != '\0')
				{
					printf("%c", *str);
					i++;
					str++;
				}
				i--;
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				int num = va_arg(args, int);
				printf("%d", num);
				i++;
			}
			else 
			{
				printf("%%");
				printf("%c", format[i]);
				i++;
			}
		}
	}
	va_end(args);
	return (i);
}
