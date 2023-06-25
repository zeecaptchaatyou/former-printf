#include "main.h"

/**
 * print_char - prints a single character to sdout
 * @c: character to be printed
 * Return: Nada.
*/
void print_char(char c)
{
write(1, &c, 1);
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
write(1, &s[i], 1);
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
char c;
if (n < 0)
{
n *= -1;
c = 45;
write(1, &c, 1);
}
if (n > 9)
{
temp = n;
while (temp > 9)
{
temp = n % (pow_zee(n));
result = (n - temp) / pow_zee(n);
n = temp;
c = result + 48;
write(1, &c, 1);
}
c = temp + 48;
write(1, &c, 1);
}
else if (n > 0 && n <= 9)
{
c = n + 48;
write(1, &c, 1);
}
}

/**
 * d_b - converts a decimal number into a binary number
 * @n: decimal number to be converted
 * Return: binary equivalent of n
*/
void d_b(size_t n)
{
size_t bits = (checker(n, 'b'));
char c;
if (n == 0)
{
c = 48;
write(1, &c, 1);
return;
}
while (bits >= 1)
{
if (n >= bits)
{
c = 49;
write(1, &c, 1);
n -= bits;
}
else if (n < bits)
{
c = 48;
write(1, &c, 1);
}
bits >>= 1;
}
}
