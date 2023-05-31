#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest prime factor of the number
 * 612852475143, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long int count = 612852475143;
unsigned long int prime;
while (prime < (count / 2))
{
if ((count % 2) == 0)
{
count = count / 2;
continue;
}
for (prime = 3; prime < (count / 2); count = count + 2)
{
if ((count % prime) == 0)
count = count / prime;
}
}
printf("%lu\n", count);
return (0);
}
