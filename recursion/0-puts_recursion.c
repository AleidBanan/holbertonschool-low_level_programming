#include "main.h"

/**
* _puts_recursion - prints a string followed by a newline
* @s: pointer to the string
*
* Description: prints one character at a time using recursion
* and prints a newline at the end.
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
