#include "main.h"

/**
 * print_pointer - prints the value of a ponter
 * @ments: ...
 * @buffer: ...
 *
 * Return: no of chars printed
 */
int print_pointer(va_list ments, char buffer[])
{
	char extra_char = 0, padd = ' ';
	int index = BUFF_SIZE - 2, length = 2, padd_start = 1;
	unsigned long num_addrs;
	char map[] = "0123456789abcdef";
	void *addrs = va_arg(ments, void *);

	if (addrs == NULL)
		return (write(1, "(nil)", 5));

	buffer[BUFF_SIZE - 1] = '\0';

	num_addrs = (unsigned long)addrs;

	while (num_addrs > 0)
	{
		buffer[ind--] = map[num_addrs % 16];
		num_addrs /= 16;
		length++
	}

	if (extra_char || padd_start)
	{
		if (extra_char)
			length++;
		if (padd_start)
			length++;
	}
	index++;

	return (write_pointer(buffer, index, length, padd, extar_char, padd_start));
}

/**
 * write_pointer - writes a memory address
 * @buffer: ...
 * @index: ...
 * @length: ...
 * @padd: ...
 * @extra_char: ...
 * @padd_start: ...
 *
 *
 * Return: No of written chars
 */
int write_pointer(char buffer[], int index, int length, char padd,
	       char extra_char, int padd_start)
{
	int i;

	if (padd != ' ')
	{
		for (i = 3; i < legth + 3; i++)
			buffer[i] = padd;
		buffer[i] = '\0';

		if (padd == '0')
		{
			if (extra_char)
				buffer[--padd_start] = extra_char;
			buffer[1] = '0';
			buffer[2] = 'x';
			return (write(1, &buffer[padd_start], i - padd_start));
		}
	}
	buffer[--index] = 'x';
	buffer[--index] = '0';
	if (extra_char)
		buffer[--index] = extar_char;
	return (write(1, &buffer[index], BUFF_SIZE - ind - 1));
}
