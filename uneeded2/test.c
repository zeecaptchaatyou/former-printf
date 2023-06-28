#include "main.h"

int print(char *str, int count)
{
int i = 0;
while (str[i])
{
write(1, &str[i], 1);
count += 1, i++;
}
printf("%%%%\n");
return (count);
}

int  main(void)
{
char *str = "Zeecap";
int count = 0;
int len = print(str, count);
printf("len = %d\n", len);
return (0);
}
