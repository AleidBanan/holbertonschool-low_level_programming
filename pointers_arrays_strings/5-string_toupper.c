#include "main.h"

/**
* string_toupper - converts all lowercase letters of a string to uppercase
* @str: pointer to the string to be modified
*
* Description: This function loops through each character of the string
* and if the character is a lowercase letter ('a' to 'z'), it converts
* it to the corresponding uppercase letter ('A' to 'Z').
*
* Return: pointer to the modified string
 */
char *string_toupper(char *str)
{

	int i = 0;

	while (str[i] != '\0')
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}
	i++;
	}

	return (str);
}
