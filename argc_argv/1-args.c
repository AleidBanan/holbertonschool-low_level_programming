#include <stdio.h>
/**
* main - prints the program length
* @argc: number of arguments
* @argv: array of argument strings
*
* Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
