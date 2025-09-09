#include "main.h"

/**
* factorial - returns the factorial of a given number
* @n: the number to calculate the factorial of
* Description: Uses recursion to calculate the factorial.
* Return: factorial of n, or -1 if n is negative
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	else
		return (n * factorial(n - 1));

}
