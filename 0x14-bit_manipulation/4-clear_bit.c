#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: The number to turn bit off at index.
 * @index: The index to turn off.
 *
 * Return: 1 on success else -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > (sizeof(unsigned long int) * 8))
return (-1);
if ((*n >> index) & 1)
{
*n -= 1 << index;
return (1);
}
return (1);
}
