#include "main.h"

/**
 * print_rot - prints the rot 13'ed string
 * @s: string to be rot'ed, yunno
 * @count: count += _strlen(s)
 * Return: count argument incremented by length of s
*/
size_t print_rot(char *s, size_t count)
{
size_t i = 0, len = 0;
char c, *str;

if (s == NULL)
return (0);
len = _strlen(s);
str = (char *)malloc((len *sizeof(char)) + 1);
if (str == NULL)
return (0);
str = _strcpy(str, s);

for ( ; str[i] != '\0'; i++)
{
if (_isalpha(str[i]))
{
if (_islower(str[i]))
str[i] = ((str[i] - 'a' + 13) % 26) + 'a';
else if (_isupper(str[i]))
str[i] = ((str[i] - 'A' + 13) % 26) + 'A';
}
}
for (i = 0; str[i] != '\0'; i++, count++)
{
c = str[i];
write(1, &c, 1);
}
free(str);
return (count);
}

/**
* print_reverse - function that prints a string in reverse.
* @s: string to be printed
* @count: count += _strle(s)
* Return: Nada
*/
size_t print_reverse(char *s, size_t count)
{
char c, *str;
int len = (_strlen(s)) - 1;

if (s == NULL)
return (0);
str = (char *)malloc(((len + 1) * sizeof(char)) + 1);

if (str == NULL)
return (0);
str = _strcpy(str, s);

for ( ; len >= 0; count++, len--)
{
c = str[len];
write(1, &c, 1);
}
return (count);
}


/**
 * print_customstr - prints a string with modifications specified by meeeee
 * @s: string to be modified and printed
 * @count: count += length of the string
 * Return: count
*/
size_t print_customstr(char *s, size_t count)
{
size_t i = 0;
char c;
for ( ; s[i]; i++, count++)
{
if ((s[i] > 0 && s[i] < 32) || s[i] >= 127 || s[i] < 0)
{
c = '\\', write(1, &c, 1);
c = 'x', write(1, &c, 1);
}
else
c = s[i], write(1, &c, 1);
}
return (count);
}

/**
 * print_pointer - prints a pointer toa data type
 * @n: address to be printed
 * @count: count += number of chars printed to stdout
 * Return: count
*/
size_t print_pointer(size_t n, size_t count)
{
int i = 0;
char *str, c;

str = _u_itoa(n, 16);
if (str == NULL)
{
free(str);
return (0);
}
c = '0', write(1, &c, 1);
c = 'x', write(1, &c, 1);
while (str[i])
{
c = str[i];
write(1, &c, 1), i++, count++;
}
free(str);
return (count);
}
