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
unsigned int num;
int index;
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
num = num + 1;
}
else
num = num << 1;
index++;
}
return (num);
}
