#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase,
 * followed by a newline.
 *
 * Return: 0.
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');
return (0);
}
