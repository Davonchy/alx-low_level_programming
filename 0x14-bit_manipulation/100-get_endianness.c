#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
int count = 1;
char *endian = (char *)&count;
if (*endian)
return (1);
return (0);
}
