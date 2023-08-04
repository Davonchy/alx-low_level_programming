#include "main.h"
#include <limits.h>

/**
 * get_bit - returns the value of a bit at a given index.
 * @index: is the index, starting from 0.
 * @n: The bit.
 *
 * Return: The bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > 64)
return (-1);
if ((n & (1 << index)) == 0)
return (0);
return (1);
}
