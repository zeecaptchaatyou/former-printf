#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

size_t print_binary(size_t n, size_t count);
size_t print_string(char *s, size_t count);
size_t print_char(char c, size_t count);
size_t print_octal(size_t n, size_t count);
size_t print_decimal(ssize_t n, size_t count);
size_t print_h_decimal(size_t n, size_t count);
size_t print_uppercase_h_decimal(size_t n, size_t count);
size_t print_u_int(size_t n, size_t count);


ssize_t checker(ssize_t n, char base);
void _putchar(char c);
int _strlen(char *s);
int pow_zee(int n);
int num_length_counter(int n);
int _printf(const char *format, ...);
size_t (*i_spotify(char c))(ssize_t n, size_t count);
size_t (*ui_spotify(char c))(size_t n, size_t count);
void (*c_spotify(char c))(ssize_t n, size_t count);
char *_itoa(ssize_t n, int base);
char *_u_itoa(size_t n, int base);
char *toUpperCase(char *str);


/**
 * struct int_specifiers - don't mind us
 * @c: conversion specifier
 * @specify: pointer to a function that executess specify
*/
typedef struct int_specifiers
{
char c;
size_t (*specify)(ssize_t i, size_t count);
} int_spec;

/**
 * struct u_int_specifiers - still don't mind me...I'll have some use soon
 * @c: I do the same thing as my sister above
 * @specify: me too (wish I had that black-faced side eyed emoji here)
*/
typedef struct u_int_specifiers
{
char c;
size_t (*specify)(size_t i, size_t count);
} u_int_spec;

#endif /*"MAIN_H"*/
