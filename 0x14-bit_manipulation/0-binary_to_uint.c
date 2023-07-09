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
int i;
unsigned int sum = 0;
if (!b || !*b)
return (0);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
else if (b[i] == '1')
{
sum *= 2;
sum += 1;
}
else
sum *= 2;
}
return (sum);
}
