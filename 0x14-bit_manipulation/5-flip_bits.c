#include "main.h"

/**
 * int flip_bits - returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: The first number
 * @m: The number to flip bit into
 *
 * Return:  The number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int bit = 0;
unsigned long int xor;
xor = n ^ m;
while (xor)
{
bit = bit + (xor & 1);
xor = xor >> 1;
}
return (bit);
}
