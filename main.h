#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _puts(char *str);
char*_memcpy(char *dest, char *src, unsigned int n);
int _write_buffer(char *buffer, unsigned int size);
int print_integer(char *buffer, int num);
int print_unsigned_integer(char *buffer, unsigned int num);
int print_octal(char *buffer, unsigned int num);
int print_hexadecimal(char * buffer, unsigned int num, int uppercase);
const char *print_string(char *buffer, const char *format, va_list args, int *count);
const char * print_custom_string(char *buffer, const char *format, va_list args, int *count);
int print_pointer(char *buffer, void *ptr);
int _printf(const char *format, ...);
int _putchar(char c);

#endif
