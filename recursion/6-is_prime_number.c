#include "main.h"

/**
* is_prime_number - returns 1 if n is prime, 0 otherwise
* @n: the number to check
*
* Description: Uses a helper function to check recursively whether n
* is divisible by any number from 2 up to sqrt(n).
*
* Return: 1 if n is prime, 0 otherwise
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (_is_prime_helper(n, 2));
}

/**
* _is_prime_helper - recursively tests divisors for primality
* @n: the number to check
* @i: current divisor being tested
*
* Return: 1 if n is prime, 0 if divisible by i or any other divisor
 */
int _is_prime_helper(int n, int i)
{
	if (i * i > n)
		return (1);

	if (n % i == 0)
		return (0);

	return (_is_prime_helper(n, i + 1));
}
