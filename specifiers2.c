#include "main.h"


/**
 * print_h_decimal - prints the hexadecimal value of n to stdout
 * @n: number to be printed
*/
void print_h_decimal(size_t n)
{
int i = 0;
char *str, c;

str = _u_itoa(n, 16);
if (str == NULL)
{
free(str);
return;
}
while (str[i])
{
c = str[i];
write(1, &c, 1), i++;
}
free(str);
}

/**
 * print_uppercase_h_decimal - prints the uppercase hexadecimal value of n
 * @n: number to be printed
*/
void print_uppercase_h_decimal(size_t n)
{
int i = 0;
char *str, c;

str = _u_itoa(n, 16);
if (str == NULL)
{
free(str);
return;
}
while (str[i])
{
if (str[i] > 96 && str[i] < 123)
str[i] -= 32;
c = str[i];
write(1, &c, 1), i++;
}
free(str);
}

/**
 * print_u_int - prints unsigned value of of n to stdout
 * @n: number to be printed
*/
void print_u_int(size_t n)
{
int i = 0;
char *str, c;
str = _u_itoa(n, 10);
if (str == NULL)
{
free(str);
return;
}
while (str[i])
{
c = str[i], write(1, &c, 1);
i++;
}
free(str);
}
