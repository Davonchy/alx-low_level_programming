#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: the string to be printed
 *
 */
void print_rev(char *s)
{
int n = 0;
while (s[n] != '\n')
{
n++;
}
for (n -= 1; n >= 0; n--)
{
putchar(s[n]);
}
putchar('\n');
}
