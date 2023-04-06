#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value
 * @y: value
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (x == 0)
		return (0);
	return (x * _pow_recursion(y, x - 1));
}
