#include "main.h"
#include <stddef.h>

/**
* _strstr - locates a substring
* @haystack: the string to be searched
* @needle: the substring to look for
*
* Description: function finds the first occurrence of the
* substring needle in the string haystack.
*
* Return: pointer to the beginning of the located substring,
* or NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')  /* empty needle */
		return (haystack);

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*h != '\0' && *n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')  /* reached end of needle => match found */
			return (haystack);

			haystack++;
	}

	return (NULL);
}
