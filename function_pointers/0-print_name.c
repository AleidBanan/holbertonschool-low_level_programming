#include <stdio.h>

/**
* print_name - calls a function to print a name
* @name: the string to print
* @f: pointer to function that takes a string and prints it
*
* Description: If @name and @f are not NULL, this function
* will call @f, passing @name to it.
*/
void print_name(char *name, void (*f)(char *))
{

	if (name != NULL && f != NULL)
	{
		f(name);
	}
}

