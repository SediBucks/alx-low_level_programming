#include "main.h"
#include <string.h>
/**
 * reverse_array - reverses the content of an array
 * of integers.
 * @a: array.
 * @n: value.
 * Return: Always0..
 */

int _strcmp (char *str1, char *str2) 
{
    while (*str1 != '\0' && *str1 == *str2) 
{
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}

