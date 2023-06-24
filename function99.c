#include "main.h"
#include <stdio.h>

/**
 * deToOct - ...
 * @dec: decimal
 *
 * Return: void
 */
void deToOct(int dec)
{
	if (dec == 0)
	{
		printf("0");
		return;
	}

	int octal[1024];
	int j, i = 0;

	while (dec > 0)
	{
		octal[i] = dec % 8;
		dec /= 8;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		printf("%d", octal[i]);
	}
}

/**
 * decToHex - ...
 * @dec: ...
 *
 * Return: void
 */
void decToHex(int dec)
{
	if (dec == 0)
	{
		printf("0");
		return;
	}

	char hexa[1024];
	int j, i = 0;

	while (dec > 0)
	{
		int rem = dec % 16;

		if (rem < 10)
			hexa[i] = '0' + rem;
		else
			hexa[i] = 'A' + rem - 10;

		dec /= 16;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		printf("%c", hexa[i]);
	}
}

/**
 * decToHexUpp - ..
 * @dec: ..
 *
 * Return: void
 */
void decToHexUpp(int dec)
{
	if (dec == 0)
	{
		printf("0");
		return;
	}

	char hexa[1024];
	int j, i = 0;

	while (dec > 0)
	{
		int rem = dec % 16;

		if (rem < 10)
			hexa[i] = '0' + rem;
		else
			hexa[i] = 'A' + rem - 10;

		dec /= 16;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		printf("%c", hexa[i]);
	}
}

/**
 * printtStringWNP - print string with non printabnle
 * @str: ...
 *
 * Return: void
 */
void printtStringWNP(const char* str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str >= 127)
		{
			printf("\\x%02X", (unsigned char)*str);
		}
		else
		{
			putchar(*str);
		}
		str++;
	}
}

/**
 * printPointerValue - ...
 * @ptr: ...
 *
 * Return: ...
 */
void printPointerValue(void* ptr)
{
	printf("%p", ptr);
}
