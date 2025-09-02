#include <stdio.h>

/**
* _strlen - returns the length of a string
* @s: pointer to the string
*
* Return: number of characters in the string
*/

int _strlen(char *s)
{
int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
