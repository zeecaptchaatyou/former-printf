#include "main"

/**
 * print_non_printable - prints ascii codes in hexa of non prnintable chars
 * @ments: ...
 * @buffer: ...
 *
 * Return: number of chars printed
 */
int print_non_printable(va_list ments, char buffer[])
{
	int i = 0, offset = 0;
	char *str = va_arg(ments, char *);

	if (str == NULL)
		return (write(1, "(null)", 6));

	while (str[i] != '\0')
	{
		if (is_printable(str[i]))
			buffer[i + offset] = str[i];
		else
			offset += append_hexa_code(str[i], buffer, i + offset);
		i++;
	}
	buffer[i + offset] = '\0';

	return (write(1, buffer, i + offset));
}
