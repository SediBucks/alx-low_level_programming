#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: always0.
 */
char *_strncat(char *dest, const char *src, int n)
{
    int i, j;

    i = 0;
    while (dest[i] != '\0') {
        i++;
    }

    j = 0;
    while (j < n && src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';

    return dest;
}
