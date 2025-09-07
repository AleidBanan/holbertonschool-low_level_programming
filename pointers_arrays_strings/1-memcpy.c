#include "main.h"

/**
* _memcpy - copies memory area
* @dest: pointer to the destination memory area
* @src: pointer to the source memory area
* @n: number of bytes to copy
*
* Description: This function copies n bytes from memory area src
* to memory area dest. The memory areas should not overlap.
*
* Return: pointer to the destination memory area (dest)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
