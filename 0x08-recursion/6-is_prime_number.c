#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number, otherwise return 0.
 * @n: value
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
		return (sedi(n, 2));
}

/**
 * sedi - returns 1 if the input integer is a prime number, otherwise return 0.
 * @x: value
 * @y: variable
 * Return: Always 0.
 */

{
	int sedi(int x, int y)
			if (x == y)
		return (1);
	if (x % y == 0)
		return (0);
	return (sedi(x, y + 1));
}
