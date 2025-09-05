#include "main.h"
/**
* _strncat - concatenates two strings using at most n bytes from src
* @dest: pointer to the destination string
* @src: pointer to the source string
* @n: maximum number of characters to copy from src
*
* Description: The _strncat function appends up to n characters
* from the string pointed to by src to the end of the string
* pointed to by dest.
*
* Return: pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
