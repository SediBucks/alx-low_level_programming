#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size.
 *
 * Return: the pointer to dest.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, lenr, i, sum, carry = 0;

	while (*(n1 + len1) != '\0')
		len1++;
	while (*(n2 + len2) != '\0')
		len2++;

	lenr = len1 > len2 ? len1 : len2;
	if (lenr + 1 > size_r)
		return (0);

	r[lenr] = '\0';
	len1--;
	len2--;
	lenr--;

	for (i = lenr; i >= 0; i--, len1--, len2--) {
		sum = carry;
		if (len1 >= 0)
			sum += n1[len1] - '0';
		if (len2 >= 0)
			sum += n2[len2] - '0';
		carry = sum / 10;
		r[i] = sum % 10 + '0';
	}

	if (carry > 0) {
		if (lenr + 1 >= size_r)
			return (0);
		for (i = lenr + 1; i > 0; i--)
			r[i] = r[i - 1];
		r[0] = carry + '0';
		return (r);
	}

	return (r[0] == '0' ? r + 1 : r);
}

