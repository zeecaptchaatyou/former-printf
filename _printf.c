#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: a character string
 * Return: number of bytes written to standard output
*/
int _printf(const char *format, ...)
{
size_t i = 0, count = 0;
void (*spec_ptr)(ssize_t), (*uspec_ptr)(size_t);
char c;
va_list ments;
va_start(ments, format);
if (format == NULL)
return (0);
for ( ; format[i]; i++, count++)
{
c = format[i];
if (c == '%')
{
++i;
c = format[i];
if (c == 'd' || c == 'i')
{
spec_ptr = i_spotify(c);
if (spec_ptr != NULL)
spec_ptr(va_arg(ments, int));
}
else if (c == 'b' || c == 'x' || c == 'X' || c == 'o' || c == 'u')
{
uspec_ptr = ui_spotify(c);
if (uspec_ptr != NULL)
uspec_ptr(va_arg(ments, unsigned int));
}
else if (c == 's')
print_string(va_arg(ments, char*));
else if (c == '%')
write(1, &c, 1);
else if (c == 'c')
print_char(va_arg(ments, int));
}
else
write(1, &c, 1);
}
va_end(ments);
return (count);
}
