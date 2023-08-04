#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @m: The number to flip to
 * @n: The number.
 *
 * Return: The flipped bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int xor = n ^ m;
unsigned int num = 0;
while (xor > 0)
{
num = num + (xor & 1);
xor = xor >> 1;
}
return (num);
}
