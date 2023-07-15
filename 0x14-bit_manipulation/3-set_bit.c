#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the digit to set bit.
 * @index: The index to turn bit on to 1.
 *
 * Return: 1 on success else -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > (sizeof(unsigned long int) * 8))
return (-1);
*n = *n + (1 << index);
return (0);
}
