#include "main.h"

/**
 * sedi - checks if a number is prime
 * @x: number
 * @y: the divisor to check
 * Return: 1 if x is prime, 0 otherwise
 */
int sedi(int x, int y)
{
	if (x == y)
		return (1);
	if (x % y == 0)
		return (0);
	return (sedi(x, y + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (sedi(n, 2));
}
