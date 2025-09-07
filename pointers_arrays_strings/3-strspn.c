#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: the main string to scan
* @accept: the set of accepted characters
*
* Description: This function returns the number of bytes in the initial
* segment of s which consist only of bytes from accept.
*
* Return: number of bytes in the initial segment of s consisting
* only of characters from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int count = 0;
	int match;

	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match = 1;
				break;
			}
		}
	if (!match)
		break;
	count++;
	}

	return (count);
}
