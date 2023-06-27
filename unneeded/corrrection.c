#include "main.h"


/**
 * pow_zee - returns the closest mutiple of 10 below or equal to n
 * @n: dunno what to say bout n
 * Return: multiple of then immediately less than n
*/
int pow_zee(int n)
{
int tens = 1, temp = 11;
if (n < 0)
n *= -1;
if (n <= 10)
return (1);
else
{
while (temp > 10)
{
temp = n / tens, tens *= 10;
}
return (tens / 10);
}
}

void print_int(ssize_t n)
{
ssize_t power = 0, rem = 0, res = 0;
char c;
if (n < 0)
{
c = 45, write(1, &c, 1);
n *= -1;
}
while (n > 9)
{
power = pow_zee(n);
rem = n % power;
res = n - rem, res /= power;
c = res +  48, write(1, &c, 1);
n = rem;
}
c = n + 48, write(1, &c, 1);
putchar('\n');
}

int main(void)
{
    int i = -2023;
    int k = pow_zee(11);
    int j = num_length_counter(101010);
    printf("k = %d\n", j);
    print_int(i);
    return (0);
}