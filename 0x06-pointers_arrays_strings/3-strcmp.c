#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: second string.
 * Return: Always 0. 
 */

int _strcmp(char *s1, char *s2)
{
    int i = 0, op = 0;

    while (s1[i] == s2[i] && s1[i] != '\0') {
        i++;
    }

    op = s1[i] - s2[i];

    return op;
}

