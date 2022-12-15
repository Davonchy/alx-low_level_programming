#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 */
void times_table(void)
{
int n, multi, prod;
for (n = 0; n <= 9; n++)
{
_putchar('0');
for (multi = 0; multi <= 9; multi++)
{
_putchar(',');
_putchar(' ');
prod = n * multi;
if (prod <= 9)
_putchar(' ');
else
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
