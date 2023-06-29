#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: a character string
 * Return: number of bytes written to standard output
*/
int _printf(const char *format, ...)
{
size_t i, len, (*spec_ptr)(ssize_t, size_t), (*uspec_ptr)(size_t, size_t);
char c, *err_msg = "(null)";
va_list ments;
va_start(ments, format);
if (format == NULL)
{
write(1, err_msg, _strlen(err_msg));
return (0);
}
for (i = 0, len = 0; format[i]; i++)
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
len = spec_ptr(va_arg(ments, int), len);
}
else if (c == 'b' || c == 'x' || c == 'X' || c == 'o' || c == 'u')
{
uspec_ptr = ui_spotify(c);
if (uspec_ptr != NULL)
len = uspec_ptr(va_arg(ments, unsigned int), len);
}
else if (c == 's')
len = print_string(va_arg(ments, char*), len);
else if (c == '%')
write(1, &c, 1), len += 1;
else if (c == 'c')
len = print_char(va_arg(ments, int), len);
}
else
write(1, &c, 1), len += 1;
}
va_end(ments);
return (len);
}