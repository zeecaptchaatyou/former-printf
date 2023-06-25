#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * handle_conversation_specifier - ...
 * @buffer: ...
 * @format: ...
 * @args: ...
 * @count: ...
 *
 * Return: ...
 */
const char *handle_conversation_specifier(char *buffer, const char *format, va_list args, int *count)
{
	char specifier = *format;

	switch (specifier)
	{
		case 'c':
			*buffer = va_arg(args, int);
			*count += 1;
			break;
		case 's':
			format = print_string(buffer, format, args, count);
			break;
		case 'd':
		case 'i':
			*count += print_integer(buffer, va_arg(args, int));
			break;
		case 'u':
			*count += print_unsigned_integer(buffer, va_arg(args, unsigned int));
			break;
		case 'o':
			*count += print_octal(buffer, va_arg(args, unsigned int));
			break;
		case 'x':
			*count += print_hexadecimal(buffer, va_arg(args, unsigned int), 0);
			break;
		case 'X':
			*count += print_hexadecimal(buffer, va_arg(args, unsigned int), 1);
			break;
		case 'S':
			format = print_custom_string(buffer, format, args, count);
			break;
		case 'p':
			*count += print_pointer(buffer, va_arg(args, void *));
			break;
		case '%':
			*buffer = '%';
			*count += 1;
			break;
		default:
			*buffer++ = '%';
			*buffer = specifier;
			*count += 2;
			break;
	}

	return (format);
}
