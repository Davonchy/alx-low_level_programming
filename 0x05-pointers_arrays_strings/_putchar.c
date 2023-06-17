#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 * _putchar - print the character c to the standard output
 * @c: the character to be printed
 *
 * Return: 1 on success
 * On error, - return -1, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
