#include "main.h"


/**
 * _u_itoa - converts its unsigned argument number into the
 * specified base and converts the
 * result into a string
 * @n: number to be toyed with
 * @base: base to which n is to be converted
 * Return: pointer to the result string
*/
char *_u_itoa(size_t n, int base)
{
int j = 0, i = 0, rem = 0;
int len = ((sizeof(char) * sizeof(int) * 8) + 1); /*max len of result*/
char temp, *str = (char *)malloc(len * sizeof(char));
/*save some seat for str using max length's vip card*/
if (str == NULL) /*but what if the card is fake?*/
{
free(str);
return (NULL);
}
if (n == 0) /*and what if the seat saved isn't even needed?*/
{
str[i++] = 48, str[i] = '\0';
return (str);
}
/*Now, let's do some conversion!*/
while (n != 0)
{
rem = n % base;
str[i++] = (rem > 9) ? (rem - 10) + 97 : rem + 48;
n /= base;
}
/*and some string reversal*/
for ( ; j < (i / 2); j++)
{
temp = str[j];
str[j] = str[i - j - 1];
str[i - j - 1] = temp;
}
str[i] = '\0';
return (str);
}


/**
 * _itoa - converts its argument number into the specified base and
 * converts the result into a string
 * @n: number to be toyed with
 * @base: base to which n is to be converted
 * Return: pointer to the result string
*/
char *_itoa(ssize_t n, int base)
{
int negativity = 0, j = 0, i = 0, rem = 0;
/*max length the result could have*/
int len = ((sizeof(char) * sizeof(int) * 8) + 1);
/*save some seat for str using len's vip card*/
char temp, *str = (char *)malloc(len * sizeof(char));
if (str == NULL) /*but what if the card is fake?*/
{
free(str);
return (NULL);
}
if (n == 0) /*and what if the seat saved isn't even needed?*/
{
str[i++] = 48, str[i] = '\0';
return (str);
}
/*-tive guests from the tenth row need to be taken care of*/
if (n < 0 && base == 10)
negativity = 1, n *= -1;
/*Now, let's do some effing conversion!*/
while (n != 0)
{
rem = n % base;
str[i++] = (rem > 9) ? (rem - 10) + 97 : rem + 48;
n /= base;
}
/*sooo, was n negative? let's check and take neccessary action(s)*/
if (negativity)
str[i++] = 45;
/*now, let's do some string reversal*/
for ( ; j < (i / 2); j++)
{
temp = str[j];
str[j] = str[i - j - 1];
str[i - j - 1] = temp;
}
str[i] = '\0';
return (str);
}
