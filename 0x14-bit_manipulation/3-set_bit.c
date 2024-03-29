#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: The address of the bit to set.
 * @index: the index, starting from 0 of the bit
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(unsigned long int) * 8)
return (-1);
if (!((*n >> index) & 1))
{
*n += 1 << index;
return (1);
}
return (-1);
}
