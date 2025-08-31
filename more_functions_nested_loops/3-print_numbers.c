#include "main.h"

/**
* print_numbers - print numbers
*
*Description: Uses _putchar to print each digit
*
* Return: character
*/
void print_numbers(void)
{
	 char c;

	for (c = 0; c < 10; c++)
	{
		_putchar('0' + c);

	}
	_putchar('\n');
}
