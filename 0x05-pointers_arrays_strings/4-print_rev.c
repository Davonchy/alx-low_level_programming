#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: the string to be printed
 *
 */
void print_rev(char *s)
{
int length = 0, index;
while (s[index++])
length++;
for (index = length - 1; index >= 0; index--)
_putchar(s[index]);
_putchar('\n');
}
