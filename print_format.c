#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: a character string
 * Return: number of bytes written to standard output
*/
int _printf(const char *format, ...)
{
size_t i = 0;
va_list ments;
va_start(ments, format);
for ( ; format[i]; i++)
{
if (format[i] != '%')
_putchar(format[i]);
else
{
if (format[i] == '%')
{
switch (format[++i])
{
case 'c':
print_char(va_arg(ments, int));
break;
case 's':
print_string(va_arg(ments, char *));
break;
case 'b':
d_b(va_arg(ments,  size_t));
break;
case 'd':
print_int(va_arg(ments, int));
break;
case 'i':
print_int(va_arg(ments, int));
break;
}
}
}
}
return (i);
}
