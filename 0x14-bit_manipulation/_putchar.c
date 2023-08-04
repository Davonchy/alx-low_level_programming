#include "main.h"

/**
 * main - Print a character on the standard error
 * @c: The character to print
 *
 * Return: On success 1.
 * On error - return -1, and errno is set appropriately
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
