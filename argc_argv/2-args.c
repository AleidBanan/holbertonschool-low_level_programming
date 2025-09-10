#include <stdio.h>
/**
* main - prints all argument
* @argc: number of arguments
* @argv: array of argument strings
*
* Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		puts(argv[i]);
	}
	return (0);
}
