#include <stdio.h>
#include "main.h"
#include<string.h>

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: the string to print.
 *
 * Return:
 */
void _puts(char *str)
{
while (*str)
_putchar(*str++);
_putchar('\n');
}
