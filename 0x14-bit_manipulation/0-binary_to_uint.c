#include "main.h"

/**
 * binary_to_uint - converts a binary number
 * to an unsigned int
 * @b: The array of binary numbers to convert
 *
 * Return: 0 if there is one or more chars in the
 * string that is not 0 or 1 or b is NULL
 * else the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int num;
unsigned int index;
if (!b || !*b)
return (0);
num = 0;
index = 0;
while (b[index])
{
if (b[index] > 49)
return (0);
else if (b[index] == 49)
{
num = num << 1;
num += 1;
}
else
num = num << 1;
index++;
}
return (num);
}
