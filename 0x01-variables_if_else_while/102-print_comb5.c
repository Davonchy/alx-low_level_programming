#include <stdio.h>

/**
 * main - prints all possible combinations of two-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
int num1;
int num2;
int num3;
int num4;
for (num1 = 0; num1 < 10; num1++)
{
for (num2 = 0; num2 <= 10; num2++)
{
for (num3 = 0; num3 < 10; num3++)
{
for (num4 = 0; num4 < 10; num4++)
{
putchar('0' + num1);
putchar('0' + num2);
putchar(32);
putchar('0' + num3);
putchar('0' + num4);
if (!(num1 == 9 && num2 == 8))
{
putchar(',');
putchar(32);
}
}
}
}
}
putchar('\n');
return (0);
}
