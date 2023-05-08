#include <stdio.h>

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 *
 */
void print_alphabet_x10(void)
{
char c;
int j;
for (j = 0; j <= 9; j++)
{
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
}
}
