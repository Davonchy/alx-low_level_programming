#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long num1 = 1;
unsigned long num2 = 2;
unsigned long res;
int index;
index = 50 - 2;
printf("%lu, %lu, ", num1, num2);
for (index = 3; index <= 50; index++)
{
res = num1 + num2;
printf("%lu", res);
num1 = num2;
num2 = res;
if (index == 50)
printf("\n");
else
printf(", ");
}
return (0);
}
