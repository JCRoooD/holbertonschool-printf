#include "main.h"
#include <stdio.h>
/**
 *_printf - iterates through the args until it finds % and prints it
 *@format: string containing the %
 *Return: times the char is printed
 */
int _printf(const char *format, ...)
{
	int i, j;
	int times = 0;
	va_list list;
	program prg[] = {
		{'c', print_c}
		{'s', print_s}
		{'i', print_int}
		{'d', print_int}
		{'%', print_mod}
		{'\0', NULL}
	};

	va_start(list, format);

	for (i = 0; format[i]; i++)
		if (format[i] == '%')	
		{
			i++;
			for (; format[i] != '\0'; i++)
			{
				for (j = 0; prg[j] != '\0'; j++)
					if (format[i] == prg[j].argu)
					{
						times += prg[j].f(list);
						break;
					}
				if (prg[j].argu)
					break;
			}
			if (format[i] != '\0')
				return (-1);
		}
		else
		{
			write(1, &format[i], 1);
			times += 1;
		}
	va_end(list);
	return (times);
}
