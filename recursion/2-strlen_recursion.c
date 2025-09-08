#include "main.h"

/**
* _strlen_recursion - returns the length of a string
* @s: pointer to the string
*
* Description: This function calculates the length of a string
* using recursion by checking each character until the null
* terminator '\0' is found.
*
* Return: length of the string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
