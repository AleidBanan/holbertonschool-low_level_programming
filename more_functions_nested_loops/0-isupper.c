#include "main.h"
#include <stdio.h>

/**
* _isupper - checks if a character is uppercase
* @c: The character to check (as an int, ASCII value)
*
* Return: 1 if c is uppercase, 0 otherwise
*/

int _isupper(int c)
{
if (c >= 65 && c <= 90)
	{
	return (1);
	}

else
	{
	return (0);
	}
}
