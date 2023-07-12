#include <stdio.h>
#include <unistd.h>

/**
 * main - print a character to the standard output
 * @c: the character to print
 *
 * Return: 1 on success.
 * On error - return -1, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
