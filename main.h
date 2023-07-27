#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
 *pgrm - program to print
 *@argu: character that will show the argument
 *@f: function that will run if argu matches
 */
typedef struct pgrm
{
char *argu;
int (*f)(va_list);
}
program;

/**
 *_printf - will mimic printf original function
 *@format: diffrent format outputs
 *Return: the desired characters
 */
/* function declaration */
int _printf(const char *format, ...);
int print_c(char c);
int print_s(char *s);
#endif
