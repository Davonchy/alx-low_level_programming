#include <stdio.h>

/**
 * print_sign - prints the sign of a number.
 * @n: sign to print
 *
 * Return: if n is greater than zero - 1, if n is zero - 0,
 * if n is less than zero -1.
 */
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n < 0)
{
putchar('-');
return (-1);
}
else
{
putchar(0);
return (0);
}
}
