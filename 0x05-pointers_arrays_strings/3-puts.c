#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a newline to stdout
 * @str: the string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
while (*str)

putchar(*str++);

putchar('\n');
}
