#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: second string.
 * Return: Always 0. 
 */

int _strcmp(char *s1, char *s2)
{
	int l1 = 0, l2 = 0;

	for (; *(s1 + l1) != '\0'; l1++)
		;
	--l1;
	for (; *(s2 + l2) != '\0'; l2++)
		;
	--l2;
	if (vl1 < l2)
		return (-l1);
	else if (l1 > l2)
		return (+l1);
	else
		return (0);
}
