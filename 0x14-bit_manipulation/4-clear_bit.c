#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: The address where the bit to set to 0 is.
 * @index: is the index, starting from 0 of the bit
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(unsigned long int) * 8)
return (-1);
if ((*n >> index) & 1)
{
*n = *n - (1 << index);
return (1);
}
return (1);
}
