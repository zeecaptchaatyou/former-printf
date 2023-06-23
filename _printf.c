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
			_putchar(*format);
			i++;
		}
		else
		{
			format++;
		}

		if (*format == '%')
		{
			_putchar('%');
			i++;
		}
		else if (*format == 'c')
		{
			char c = va_arg(args, int);
			_putchar(c);
			i++;
		}
		else if (*format == 's')
		{
			char *str = va_arg(args, char*);
			while (*str != '\0')
			{
				_putchar(*str);
				i++;
				str++;
			}
		}
		else if (*format == 'd' || *format == 'i')
		{
			int num = va_arg(args, int);
			_putchar(num);
			i++;
		}
		else 
		{
			_putchar('%');
			_putchar(*format);
			i += 2;
		}
	}
	format++;
	va_end(args);
	return (i);
}
