#include <stdio.h>

/**
 * main - print a character to the standard output
 * @c: the character to print
 *
 * Return: 1 0on success.
 * On error - return -1, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
