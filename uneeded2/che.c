#include "main.h"

void print_uppercase_h_decimal(size_t n);
/**
 * _itoa - converts a given number of any base into a specified base,
 * converts the result into a string and returns a pointer to the string...
 * cool, right?...yeah, I spent days on it.
 * @n: number to be converted...it sha has to be an integer.
 * @base: base to convert n into.
 * Return: pointer to the string the conversion result was converted
 * into.
*/

char *_itoa(ssize_t n, int base)
{
int negativity = 0, j = 0, i = 0, rem = 0;
int len = ((sizeof(char) * sizeof(int) * 8) + 1); /*max length the result could
have*/
char temp;
char *str = (char *)malloc(len * sizeof(char));/*save some seat for str using 
max length's vip card*/
if (str == NULL) /*but what if the card is fake?*/
{
free(str);
return (NULL);
}
if (n == 0) /*and what if the seat saved isn't even needed? */
{
str[i++] = 48, str[i] = '\0';
return (str);
}
if (n < 0 && base == 10) /*-tive guests from the tenth row need to be taken care of*/
negativity = 1, n *= -1;
/*Now, let's do some conversion!*/
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
return(str);
}

void print_uppercase_h_decimal(size_t n)
{
int i = 0;
char *str, c;
str = _itoa(n, 16);
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


void print_mod(char *str)
{
int count = 0, i = 0;
char mod = '%';
while (str[i])
{
if (str[i] == '%')
count++;
if (count == 2)
{
write(1, &mod, 1);
break;
}
i++;
}
}

int main(void)
{
char *str = "ZeeCaa%%tcha";
print_mod(str);
return(0);
}