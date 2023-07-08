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
	unsigned int num, i;

	if (!b || !*b)
		return (0);

	num = i = 0;
	while (b[i])
	{
		if (b[i] > 49)
			return (0);
		else if (b[i] == 49)
		{
			num <<= 1;
			num += 1;
		}
		else
			num <<= 1;
		i++;
	}
	return (num);
}
