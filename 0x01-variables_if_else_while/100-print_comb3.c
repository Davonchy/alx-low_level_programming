#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: Always 0.
 */
int main(void)
{
int digit;
int num;
for (digit = 0; digit < 9; digit++)
{
for (num = digit + 1; num <= 9; num++)
{
putchar((digit % 10) + '0');
putchar((num % 10) + '0');
if (digit == 8 && num == 9)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
