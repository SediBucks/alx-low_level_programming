#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s:  string to be scanned
 * @accept: character to be searched in s
 * Return: always 0.
 */
unsigned int _strspn(char *s, char *accept);
{
	unsigned int count = 0;
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}

		if (!accept[j])
			break;
	}

	return count;
}
