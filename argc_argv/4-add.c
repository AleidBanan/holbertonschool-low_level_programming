#include <stdio.h>
#include <stdlib.h>

/**
* main - adds positive numbers passed as arguments
* @argc: number of arguments
* @argv: array of argument strings
*
* Description: The program sums all positive integers
* provided via command line. If an argument contains
* a non-digit character, it prints "Error" and returns 1.
* If no numbers are passed, it prints 0.
*
* Return: 0 on success, 1 if any argument is invalid
*/
int main(int argc, char *argv[])

{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
