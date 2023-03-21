#include "main.h"
/**
 * _islower - check if its lowercase
 * @c:  value to compare
 * Return: 1 if true, 0 if false
 */
int _islower(int c)

{

	if (c > 'a' && c < 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
