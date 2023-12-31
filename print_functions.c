#include "main.h"
#include <stdio.h>
/**
 *print_c - printing a char
 *@page: page containing list of args, va list
 *Return: number of characters printed
 */
int print_c(va_list page)
{
	char c = va_arg(page, int);

	write(1, &c, 1);
	return (1);
}

/**
 *print_s - printing a string
 *@page: page containing list of args, va list
 *Return: number of characters printed
 */
int print_s(va_list page)
{
	int l;
	int count = 0;
	char *ptr = va_arg(page, char *);

	if (ptr == NULL)
		ptr = "(null)";

	for (l = 0; ptr[l]; l++)
	{
		write(1, &ptr[l], 1);
		count += 1;
	}
	return (count);
}

/**
 *print_mod -prints percentage char
 *@page: page containing list of args, va list
 *Return: number of characters to be printed
 */
int print_mod(va_list page)
{
	char x = '%';

	(void) page;

	write(1, &x, 1);
	return (1);
}

/**
 *print_int -prints an integer
 *@page: page containing list of args, va list
 *Return: number of characters to be printed
 */
int print_int(va_list page)
{

	int number = va_arg(page, int);
	unsigned int absolute_value;
	char digit;
	int exponent = 1;
	int length = 0;

	if (number < 0)
	{
		digit = '-';
		length = length + write(1, &digit, 1);
		absolute_value = number * -1;
	}
	else
		absolute_value = number;

	while (absolute_value / exponent > 9)
	{
		exponent *= 10;
	}

	while (exponent != 0)
	{
		digit = absolute_value / exponent + '0';
		length = length + write(1, &digit, 1);
		absolute_value = absolute_value % exponent;
		exponent = exponent / 10;
	}
	return (length);
}
