#include "main.h"
/**
* _strncpy - copies a string
* @dest: pointer to the destination buffer
* @src: pointer to the source string
* @n: maximum number of characters to copy
*
* Description: This function copies at most n characters from
* the string pointed to by src into dest.
* Return: pointer to the destination string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i]
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
