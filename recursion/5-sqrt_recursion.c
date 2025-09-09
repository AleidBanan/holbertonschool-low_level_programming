#include "main.h"

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: the number to find the square root of
*
* Description: Uses recursion to find the natural square root of n.
* If n does not have a natural square root, the function returns -1.
*
* Return: natural square root of n, or -1 if none exists
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	return (_sqrt_helper(n, 1));
}
/**
* _sqrt_helper - recursively tests candidate numbers for square root
* @n: the number to find the square root of
* @i: current candidate being tested
*
* Return: candidate if it is the square root, or -1 if no natural
* square root exists
*/
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (_sqrt_helper(n, i + 1));
}
