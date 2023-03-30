#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array.
 * @n: value.
 * Return: Always0..
 */
int _strcmp(char *s1, char *s2)
{
	int v1 = 0, v2 = 0;

	for (; *(s1 + v1) != '\0'; v1++)
		;
	--v1;
	for (; *(s2 + v2) != '\0'; v2++)
		;
	--v2;
	if (v1 < v2)
		return (-v1);
	else if (v1 > v2)
		return (+v1);
	else
		return (0);
}
