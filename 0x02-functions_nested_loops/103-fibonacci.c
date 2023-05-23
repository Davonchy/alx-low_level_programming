#include <stdio.h>
#include "main.h"

/**
 * main - prints the sum of the even-valued terms,
 * followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long num1 = 0;
unsigned long num2 = 1;
unsigned long res;
unsigned long sum;
while (res)
{
res = num1 + num2;
if (res > 4000000)
break;
if ((res % 2) == 0)
sum += res;
num1 = num2;
num2 = res;
}
printf("%lu\n", sum);
return (0);
}
