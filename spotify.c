#include "main.h"

/**
 * i_spotify - full meaning is "spot specifier", you grab
 * @c: conversion specifier
 * Return: pointer to a function that takes an int as arg and returns void
*/
size_t (*i_spotify(char c))(ssize_t, size_t)
{
int i = 0;

int_spec specs[] = {
{'d', print_decimal},
{'i', print_decimal},
{'\0', NULL}
};
while (specs[i].c != '\0')
{
if (c == specs[i].c)
return (specs[i].specify);
i++;
}
return (NULL);
}

/**
 * ui_spotify - spots the function for unsigned data types
 * @c: specifier to be spotted
 * Return: pointer to specific pointer associated
 * with the specifier identified
*/
size_t (*ui_spotify(char c))(size_t, size_t)
{
int i = 0;

u_int_spec uspecs[] = {
{'b', print_binary},
{'o', print_octal},
{'x', print_h_decimal},
{'X', print_uppercase_h_decimal},
{'u', print_u_int},
{'\0', NULL}
};
while (uspecs[i].c != '\0')
{
if (c == uspecs[i].c)
return (uspecs[i].specify);
i++;
}
return (NULL);
}
