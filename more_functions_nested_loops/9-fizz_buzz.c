#include <stdio.h>

/**
* print_number - prints an integer using _putchar
* @n: the number to print
*/
void print_number(int n)
{
	if (n / 10)
		print_number(n / 10);
	putchar('0' + n % 10);
}

/**
* main - prints numbers from 1 to 100 with FizzBuzz rules
*
* Return: 0
*/
int main(void)
{
int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
		}
		else if (i % 3 == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
		}
		else if (i % 5 == 0)
		{
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
		}
		else
		{
			print_number(i);
		}

		if (i != 100)
			putchar(' ');
	}
	putchar('\n');
return (0);
}
