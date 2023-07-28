#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
 *program - program to print
 *@argu: character that will show the argument
 *@f: function that will run if argu matches
 */
typedef struct program
{
char argu;
int (*f)(va_list);
}
pgrm;

/**
 *_printf - will mimic printf original function
 *@format: diffrent format outputs
 *Return: the desired characters
 */
/* function declaration */
int _printf(const char *format, ...);
int print_c(va_list page);
int print_s(va_list page);
int print_mod(va_list page);
int print_int(va_list page);
#endif
