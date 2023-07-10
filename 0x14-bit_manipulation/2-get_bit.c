#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the number to check for bits value.
 * @index: the index to locate the bit.
 *
 * Return: the value of the bit at index index or -1
 * if error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
int value;
value = ((n >> index) & 1);
if (index > (sizeof(unsigned long int) * 8))
return (-1);
return (value);
}
