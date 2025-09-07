#include "main.h"
#include <stddef.h>

/**
* _strchr - locates a character in a string
* @s: pointer to the string
* @c: character to locate
*
* Description: This function returns a pointer to the first
* occurrence of the character c in the string s.
*
* Return: pointer to the first occurrence of c, or NULL
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);

	return (NULL);
}
