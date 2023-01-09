#include "main.h"

/**
 * factorial -  returns the factorial of a given number.
 * @n: The number to find factorial of.
 *
 * Return: If n is greater than 0 - the factorial of n
 * If n is lower than 0, -1 to indicate error
 */
int factorial(int n)
{
int ans = n;
if (n < 0)
return (-1);
else if (n >= 0 && n <= 1)
return (1);
ans *= factorial(n - 1);
return (ans);
}
