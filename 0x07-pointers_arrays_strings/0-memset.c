#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: number of bytes
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
    char *ptr = s;
    while (n--)
        *ptr++ = b;
    return s;
}
