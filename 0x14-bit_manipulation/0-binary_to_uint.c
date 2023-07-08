#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: the string to convert
 *
 * Return: the converted number,
 * or return 0, if b is NULL or there is one more
 * chars in the string b that is not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int len = 0;

	if (b[len] == '\0')
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		num += (b[len] - '0') * mult;
		mult *= 2;
	}

	return (num);
}
