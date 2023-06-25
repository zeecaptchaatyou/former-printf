#include "main.h"

/**
 * print_char - prints a single character to sdout
 * @c: character to be printed
 * Return: Nada.
*/
void print_char(char c)
{
_putchar(c);
}

/**
 * print_string - prints a string to stdout
 * @s: string to be printed
 * Return: Nada.
*/
void print_string(char *s)
{
size_t i = 0;
while (s[i])
{
_putchar(s[i]);
i++;
}
}

/**
 * print_int - prints an integer to stdout
 * @n: signed number to be printed
 * Return: Nada.
*/
void print_int(ssize_t n)
{
ssize_t result, temp;
if (n < 0)
{
n *= -1;
_putchar(45);
}
if (n > 9)
{
temp = n;
while (temp > 9)
{
temp = n % (pow_zee(n));
result = (n - temp) / pow_zee(n);
n = temp;
_putchar(result + 48);
}
_putchar(temp + 48);
}
else if (n > 0 && n <= 9)
_putchar(n + 48);
}

/**
 * d_b - converts a decimal number into a binary number
 * @n: decimal number to be converted
 * Return: binary equivalent of n
*/
void d_b(size_t n)
{
size_t bits = (checker(n, 'b'));
if (n == 0)
{
_putchar(48);
return;
}
while (bits >= 1)
{
if (n >= bits)
{
_putchar(49);
n -= bits;
}
else if (n < bits)
_putchar(48);
bits >>= 1;
}
_putchar('\n');
}
