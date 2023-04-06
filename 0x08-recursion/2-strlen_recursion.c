#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: Pointer
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + _strlen_recursion(str +1);
	}
}
