#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all-prints anything
 * @format: a list of types of arguments passed to the
 * Return:0
 */
void print_all(const char * const format, ...)
{
	va_list p;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char f_arg[] = "cifs";

	va_start(p, format);
	while (format && format[i])
	{
		j = 0;
		while (f_arg[j])
		{
			if (format[i] == f_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(p, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(p, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(p, double)), c = 1;
			break;
		case 's':
			str = va_arg(p, char *), c = 1;
			if (str == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(p);
}
