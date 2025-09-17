/**
* _strdup - returns a pointer to a newly allocated copy of a string
* @str: the string to duplicate
*
* Return: pointer to the duplicated string, or NULL if str is NULL
*/


#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str)
{
	char *new_str;

	int len = 0;

	int i;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	new_str = malloc((len + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		new_str[i] = str[i];

	new_str[len] = '\0';
	return (new_str);
}
