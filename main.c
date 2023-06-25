#include <stdio.h>
#include "main.h"

int main(void)
{
    int len;
    
    len = _printf("Testing _printf function:\n");
    len += _printf("Character: %c\n", 'A');
    len += _printf("String: %s\n", "Hello, world!");
    len += _printf("Integer: %d\n", 12345);
    len += _printf("Unsigned Integer: %u\n", 12345);
    len += _printf("Octal: %o\n", 12345);
    len += _printf("Hexadecimal (lowercase): %x\n", 12345);
    len += _printf("Hexadecimal (uppercase): %X\n", 12345);
    len += _printf("Custom String: %S\n", "Non-printable: \x07\x1F\x80");
    len += _printf("Pointer: %p\n", (void *)12345);
    len += _printf("Percentage: %%\n");

    _printf("\nTotal characters printed: %d\n", len);
    
    return 0;
}
