#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 *
 * Return: Always 0.
 */
int main(void)
{
int num1;
int num2;
int num3;
for (num1 = 0; num1 != 8; num1++)
{
for (num2 = num1 + 1; num2 != 9; num2++)
{
num3 = num2 + 1;
do{
putchar('0' + num1);
putchar('0' + num2);
putchar('0' + num3);
if (num1 != 7)
{
putchar(',');
putchar(32);
}
num3++;
}while (num3 != 10);
}
}
putchar('\n');
return (0);
}
