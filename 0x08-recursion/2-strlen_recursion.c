#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	int str = 0;
	if (*s)
	{
		return 0;
	       	else
	return 1 + _strlen_recursion(str +1);
	}
}
