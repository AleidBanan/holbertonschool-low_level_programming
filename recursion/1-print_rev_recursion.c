#include "main.h"

/**
* _print_rev_recursion - prints a string in reverse
* @s: pointer to the string
*
* Description: prints one character at a time using recursion,
* starting from the end of the string and moving backward.
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
