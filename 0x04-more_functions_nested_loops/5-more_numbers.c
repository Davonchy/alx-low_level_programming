#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 */
void more_numbers(void)
{
int index = 0;
int digits;
while (index < 10)
{
for (digits = 0; digits <= 14; digits++)
{
if (digits > 9)
_putchar((digits / 10) + '0');
_putchar((digits % 10) + '0');
}
index++;
_putchar('\n');
}
}
