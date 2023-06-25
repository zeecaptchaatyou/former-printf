#include "main.h"

/**
 * pow_zee - returns the closest mutiple of 10 below or equal to n
 * @n: dunno what to say bout n
 * Return: multiple of then immediately less than n
*/
int pow_zee(int n)
{
int tens = 1, temp = 11;
if (n > 10)
{
while (temp > 10)
{
temp = n / tens, tens *= 10;
}
return (tens / 10);
}
else
return (1);
}

/**
 * num_length_counter - its name says it all....created for the sole
 * purpose of conveting an integer into a string....yunno, for malloc
 * @n: number whose digit(s) are/is to be counted
 * Return: the length ofc
*/
int num_length_counter(int n)
{
int i = 0, modder = 10, result = 0;
if (n < 0)
n *= -1;
for ( ; n != result; modder *= 10)
result = n % modder, i++;
return (i);
}

/**
 * _strlen - returns the length of a string
 * @s: string to be counted
 * Return: length of s.
*/
int _strlen(char *s)
{
size_t i = 0;
while (s[i])
i++;
return (i);
}


/**
 * checker - checks for the nearest multiple of the base below n
 * (I must've been high when I wrote this, lmaooo)
 * (I'll still add more to this...when I have other specifiers to check for)
 * @n: number to be checked for
 * @base: specifies the base
 * Return: nearest multiple
*/
size_t checker(size_t n, char base)
{
size_t nearest = 1;
if (n == 0)
return (0);
switch (base)
{
case 'b':
while (nearest <= n)
nearest <<= 1;
return (nearest >> 1);
default: return (0);
}
}
