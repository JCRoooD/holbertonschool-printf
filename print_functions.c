#include "main.h"
/**
 *print_c - printing a char
 *@c: character
 *Return: length of char
 */
int print_c(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
 *
 *
 *
 *
 */
int print_s(char *s)
{
	int len;

	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	len = strlen[s];
	write(1, s, len);
	return (len);
}

