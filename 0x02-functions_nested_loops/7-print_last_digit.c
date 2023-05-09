#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the digit to check
 *
 * Return: last digit.
 */
int print_last_digit(int n)
{
int digit = n % 10;
if (digit < 0)
digit *= -1;
_putchar(digit + '0');
return (digit);
}
