#include "main.h"

/**
 * sort - sorts the format string of my printf function
 * according to my specifications
 * @c: string to be sorted
 * Return: 1 if the sort is what I want:yawning_face: else 0;
*/
int sort(char c)
{
if (c == 'b' || c == 'x' || c == 'X' || c == 'o'
|| c == 'u' || c == 'p')
return (1);
else if (c == 's' || c == 'R' || c == 'r' || c == 'S')
return (2);
else if (c == 'c')
return (3);
else if (c == '%')
return (4);
else
return (0);
}

/**
 * int check_format(const char *s, size_t i)
{
size_t len = _strlen(s);
char *str, c;
if (s == NULL)
return (0);

str = (char *)malloc((len *sizeof(char)) + 1);
if (str == NULL)
return (0);

_strcpy(str, s);

if (sort(str[i + 1]) == 0)
return (1);
else
return (0);
}
*/
