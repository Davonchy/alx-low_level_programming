#include "main.h"

/**
 * binary_to_uint - converts a binary number to
 * an unsigned int.
 * @b: Points to a string of 0 and 1.
 *
 * Return: the converted number, or 0 if there is
 * one or more char in the string b, that is not 0 or 1.
 * or if the string is NULL
 */
unsigned int binary_to_uint(const char *b)
{
int index;
unsigned int num = 0;
if (!b)
return (0);
for (index = 0; b[index]; index++)
{
if (b[index] <'0' || b[index] > '1')
return (0);
num = 2 * num + (b[index] - '0');
}
return (num);
}
