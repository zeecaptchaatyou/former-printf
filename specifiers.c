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
char c;
while (s[i])
{
c = s[i];
write(1, &c, 1), i++;
}
}

/**
 * print_decimal - prints decimal value of n to stdout
 * @n: number to be printed
*/
void print_decimal(ssize_t n)
{
int i = 0;
char *str = _itoa(n, 10), c;
if (str == NULL)
{
free(str);
return;
}
for ( ; str[i]; i++)
{
c = str[i];
write(1, &c, 1);
}
free(str);
}

/**
 * print_binary - prints binary value of n to stdout
 * @n: number to be printed
*/
void print_binary(size_t n)
{
int i = 0;
char *str, c;

str = _u_itoa(n, 2);
if (str == NULL)
{
free(str);
return;
}
for ( ; str[i]; i++)
{
c = str[i];
write(1, &c, 1);
}
free(str);
}

/**
 * print_octal - prints octal value of n to stdout
 * @n: number to be printed
*/
void print_octal(size_t n)
{
int i = 0;
char *str, c;

str = _u_itoa(n, 8);
if (str == NULL)
{
free(str);
return;
}
for ( ; str[i]; i++)
{
c = str[i];
write(1, &c, 1);
}
free(str);
}
