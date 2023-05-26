#include <unistd.h>
#include "main.h"

/**
 * _putchar - print the character c to the stdout.
 * @c: The character to print.
 *
 * Return: 1 on success.
 * On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
