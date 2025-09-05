/**
* leet - encodes a string into 1337
* @str: pointer to the string to be modified
*
* Description: This function replaces the letters with numbers
*
*
* Return: pointer to the modified string
*/
char *leet(char *str)
{

	int i, j;
	char letters[] = "AaEeOoTtLl";
	char leet_chars[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
		if (str[i] == letters[j])
			str[i] = leet_chars[j];
		}
	}
	return (str);
}
