#include "main.h"

/**
 * is_printable - eva;luates if a char is printable
 * @c: char
 *
 * Return: 1, or 0 on error
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - appends ascii in hexa code to buffer
 * @buffer: ...
 * @i: index to start appending
 * @ascii: ASCII
 *
 * Return: 3
 */
int  append_hexa_code(char ascii, char buffer[], int i)
{
	char map[] = "0123456789ABCDEF";

	if (ascii < 0)
		ascii *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map[ascii / 16];
	buffer[i] = map[ascii % 16];

	return (3);
}

/**
 * print_reverse_s - prints reverse string
 * @ments: ...
 * @buffer: ...
 *
 * Return: ...
 */
int print_reverse_s(va_list ments, char buffer[])
{
	char *str;
	int i, count = 0;

	str = va_arg(ments, char *);

	if (str == NULL)
	{
		str = ")null(";
	}
	for (i = 0; str[i]; i++)
		;
	for (i = i - 1; i >= 0; i--)
	{
		char z = str[i];

		write(1, &z, 1);
		count++;
	}
	return (count);
}

/**
 * print_rot13 - ...
 * @ments: ...
 * @buffer: ...
 *
 * Return: ...
 */
int print_rot13(va_list ments, char buffer[])
{
	char x;
	char *str;
	unsigned int i, j;
	int count = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(ments, char *);

	if (str == NULL)
		str = "(AHYY)";
	for (i = 0; str[i]; i++)
	{
		for (j = 0; in[j]; j++)
		{
			if (in[j] == str[i])
			{
				x = out[j];
				write(1, &x, 1);
				count++;
				break;
			}
		}
		if (!in[j])
		{
			x = str[i];
			write(1, &x, 1);
			count++;
		}
	}
	return (count);
}
