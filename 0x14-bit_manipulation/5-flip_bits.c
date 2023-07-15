#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: The numbers to flip bits of.
 * @m: The second number to flip bit of.
 *
 * Return: bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m;
unsigned long int count = 0;
while (xor)
{
count = count + (xor & 1);
xor >>= 1;
}
return (count);
}
