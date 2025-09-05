#include "main.h"
/**
* cap_string - capitalizes all words of a string
* @str: pointer to the string to be modified
*
* Description: This function capitalizes the first letter of each word
* in the string. Words are separated by: space, tab, newline, ',', ';',
* '.', '!', '?', '"', '(', ')', '{', '}'.
*
* Return: pointer to the modified string
*/
char *cap_string(char *str)
{
	int i = 0, j;
	char sep[] = " \t\n,;.!?\"(){}";
	int capitalize = 1;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && capitalize)
		{
			str[i] -= 32;
			capitalize = 0;
		}
		else
		{
			capitalize = 0;
			j = 0;
			while (sep[j] != '\0')
			{
				if (str[i] == sep[j])
				{
					capitalize = 1;
					break;
				}
				j++;
			}
		}
	i++;
	}
	return (str);
}
