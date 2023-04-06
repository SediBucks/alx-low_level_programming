#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer
 * Return: Always 0.
 */

int _strlen_recursion(char *s)

{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
