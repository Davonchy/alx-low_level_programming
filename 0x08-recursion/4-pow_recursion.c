#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: The base number
 * @y: The power
 *
 * Return: The value of x raised to power of y.
 */
int _pow_recursion(int x, int y)
{
int ans = x;
if (y < 0)
return (-1);
else if (y == 0)
return (1);
ans *= _pow_recursion(x, y - 1);
return (ans);
}
