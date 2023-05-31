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
prime = 3;
while (prime < count / 2)
{
if ((count % prime) == 0)
{
if ((prime % 3) == 2)
printf("%lu ", prime);
}
prime += 2;
}
printf("\n");
return (0);
}
