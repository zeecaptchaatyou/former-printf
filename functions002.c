#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * print_octal - ...
 * @buffer: ...
 * @num: ...
 *
 * Return: ...
 */
int print_octal(char *buffer, unsigned int num)
{
	int count = 0;

	if (num / 8)
		count += print_octal(buffer, num / 8);

	buffer[count] = num % 8 + '0';

	return (count + 1);
}

/**
 * print_hexadecimal - ...
 * @buffer: ...
 * @num: ...
 * @uppercase: ...
 *
 * Return: ...
 */
int print_hexadecimal(char * buffer, unsigned int num, int uppercase)
{
	int count = 0;
	char *hex_digits;

	hex_digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";

	if (num / 16)
		count += print_hexadecimal(buffer, num / 16, uppercase);

	buffer[count] = hex_digits[num % 16];

	return (count + 1);
}

/**
 * print_string - and handles non-printable
 * @buffer: ...
 * @format: ...
 * @args: ...
 * @count: ...
 *
 * Return: ...
 */
const char *print_string(char *buffer, const char *format, va_list args, int *count)
{
	char *str = va_arg(args, char *);
	int i = 0;

	if (str == NULL)
		str = "(nill)";

	while (str[i])
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			*buffer++ = '\\';
			*buffer++ = 'x';
			*buffer++ = (str[i] >> 4) + ((str[i] >> 4) < 10 ? '0' : 'A' - 10);
			*buffer ++ = (str[i] & 0x0f) + ((str[i] & 0x0f) < 10 ? '0' : 'A' - 10);
			*count += 4;
		}
		else
		{
			*buffer++ = str[i];
			*count += 1;
		}

		i++;
	}
	return format;
}

/**
 * print_custom_string - ...
 * @buffer: ...
 * @format: ...
 * @args: ...
 * @count: ...
 *
 * Return: ...
 */
const char * print_custom_string(char *buffer, const char *format, va_list args, int *count)
{
	char *str = va_arg(args, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";

	while (str[i])
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			*buffer++ = '\\';
			*buffer++ = 'x';
			*buffer++ = (str[i] >> 4) + ((str[i] >> 4) < 10 ? '0' : 'A' - 10);
			*buffer++ = (str[i] & 0x0F) + ((str[i] & 0x0F) < 10 ? '0' : 'A' - 10);
			*count += 4;
		}
		else
		{
			*buffer++ = str[i];
			*count += 1;
		}

		i++;

		if (buffer >= buffer + 1024)
		{
			*buffer = '\0';
			_write_buffer(buffer, 1024);
			buffer = buffer;
		}
	}
	return (format);
}

/**
 * print_pointer - ...
 * @buffer: ...
 * @ptr: ...
 *
 * Return: ...
 */
int print_pointer(char *buffer, void *ptr)
{
	unsigned long int num = (unsigned long int)ptr;
	int count = 0;

	*buffer++ = '0';
	*buffer++ = 'x';
	count += 2;

	count += print_hexadecimal(buffer, num, 1);

	return (count);
}
