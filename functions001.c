#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _puts - Writes a string to stdout
 * @str: string
 *
 * Return: no of chars written
 */
int _puts(char *str)
{
	int count = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}

	return (count);
}

/**
 * _memcpy - copies memory area
 * @dest: ...
 * @src: ...
 * @n: ...
 *
 * Return: ...
 */
char*_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

/**
 * _write_buffer - writes a buffer to stdout
 * @buffer: ...
 * @size: ...
 *
 * Return: ...
 */
int _write_buffer(char *buffer, unsigned int size)
{
	int count;

	count = write(1, buffer, size);
	if (count == -1)
		count = 0;

	return (count);
}

/**
 * print_integer - ...
 * @buffer: ...
 * @num: ...
 *
 * Return: ...
 */
int print_integer(char *buffer, int num)
{
	unsigned int positiver;
	int count = 0;

	if (num < 0)
	{
		*buffer++ = '-';
		count++;
		positive = -num;
	}
	else
	{
		positive = num;
	}

	count += print_unsigned_integer(buffer, positive);

	return (count);
}

/**
 * print_unsigned_integer - ...
 * @buffer: ...
 * @num: ...
 *
 * Return: ...
 */
int print_unsigned_integer(char *buffer, unsigned int num)
{
	int count = 0;
	if (num / 10)
		count += print_unsigned_integer(buffer, num / 10);
	else if (num == 0)
	{
		*buffer = '0';
		count = 1;
	}
	else
	{
		*buffer = num % 10 + '0';
		count = 1;
	}

	buffer[count] = num % 10 + '0';

	return (count + 1);
}
