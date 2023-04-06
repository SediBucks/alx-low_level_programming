#include "main.h"

/**
 * _sedi - finds root
 * @x: value
 * @y: value
 * Return: Always 0.
 */
	int _sedi(int x, int y)
{
		if (y * y == x)
			return (y);
		if (y * y < x)
			return (_sedi(x, y + 1));
return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: value
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
			return (_sedi(1, n));
}
