#include "main.h"

/**
 * _strpbrk - Write a function that searches a string for any of a set of bytes.
 * @s: string for first occurance
 * @accept: match a byte
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
	return (NULL);
}
