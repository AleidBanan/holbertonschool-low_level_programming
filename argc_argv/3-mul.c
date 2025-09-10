#include <stdio.h>
#include <stdlib.h>
/**
* main - The program multiplies two integers
* @argc: number of arguments
* @argv: array of argument strings
*
* Description: The program multiplies two integers
*
* Return: 0 on success, 1 if the number of arguments is incorrect
*/
int main(int argc, char *argv[])

{
	int a, b, result;

	if (argc < 3)

	{
		printf("Error\n");
		return (1);
	}
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int result = a * b;

	printf("%d\n", result);

	return (0);
}
