#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer.
 * @s: the string to convert.
 *
 * Return: 0 if not a number else return the number.
 */
int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;
do
{
if (*s == '-')
sign = sign * -1;
else if (*s >= '0' && *s <= '9')
num = (num * 10) + (*s - '0');
else if (num > 0)
break;
}
while (*s++);
return (num * sign);
}
