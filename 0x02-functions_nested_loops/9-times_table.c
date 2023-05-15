#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 */
void times_table(void)
{
int num1;
int num2;
int mul;
for (num1 = 0; num1 <= 9; num1++)
{
_putchar('0');
for (num2 = 1; num2 <= 9; num2++)
{
_putchar(',');
_putchar(' ');
mul = num1 * num2;
if (mul <= 9)
_putchar(' ');
else
_putchar((mul / 10) + '0');
_putchar((mul % 10) + '0');
}
_putchar('\n');
}
}
