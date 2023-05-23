#include <stdio.h>
#include "main.h"

/**
 * main - prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
int n;
unsigned long num1 = 1;
unsigned long num2 = 2;
unsigned long res;
n = 50 - 2;
printf("%lu, %lu, ", num1, num2);
for (n = 3; n <= 98; n++)
{
res = num1 + num2;
printf("%lu", res);
num1 = num2;
num2 = res;
if (n == 98)
printf("\n");
else
printf(", ");
}
return (0);
}
