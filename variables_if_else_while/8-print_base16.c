#include <stdio.h>

/**
* main - Entry point
*
* Description: prints all the numbers of base hexidecimal in lowercase
*
* Return: Always 0 (Success)
*/

int main(void)

{
	int n;

        char c;

	for (n = '0'; n <= '9'; n++)

	putchar(n);


	for (c = 'a'; c <= 'f'; c++)

	putchar(c);


	putchar('\n');

	return (0);
}
