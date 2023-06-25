#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

void d_b(size_t n);
size_t d_to_o(size_t n);
size_t d_to_h(size_t n);

size_t o_to_b(size_t n);
size_t o_to_d(size_t n);
size_t o_to_h(size_t n);

size_t h_to_b(size_t n);
size_t h_to_d(size_t n);
size_t h_to_o(size_t n);

size_t checker(size_t n, char base);
void _putchar(char c);
int _strlen(char *s);
int pow_zee(int n);
int num_length_counter(int n);
void print_string(char *s);
void print_char(char c);
void print_u_int(unsigned int n);
void print_int(ssize_t n);
int _printf(const char *format, ...);

/**
 * struct int_specifiers - don't mind us
 * @specifier: conversion specifier
 * @specify: pointer to a function that executess specify
*/
typedef struct int_specifiers
{
char specifier;
void (*specify)(int i);
} int_spec;

/**
 * struct u_int_specifiers - still don't mind me...I'll have some use soon
 * @specifier: I do the same thing as my sister above
 * @specify: me too (wish I had that black-faced side eyed emoji here)
*/
typedef struct u_int_specifiers
{
char specifier;
void (*specify)(unsigned int i);
} u_int_spec;

/**
 * struct string_specifiers - betty keeps making me do this....I'm not
 * useful yet! I don't even have anything to say about myself...ughh,
 * life sucks
 * @specifier: I specify stuff, yadayadayada.
 * @specify: blahblahblahhh
*/
typedef struct string_specifiers
{
char specifier;
void (*specify)(char *s);
} string_spec;


#endif /*"MAIN_H"*/
