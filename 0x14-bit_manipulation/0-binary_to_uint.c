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
int i = 0;
unsigned int sum = 0;
int dec = 1;
int len = strlen(b);
if (b[i] == '\0')
return (0);
for (i = (len - 1); i >= 0; i--)
{
if (b[i] != '0' && b[i] != '1')
return (0);
else if (b[i] == '1')
sum += dec;
dec *= 2;
}
return (sum);
}
