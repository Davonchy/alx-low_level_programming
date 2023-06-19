#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: the string to print the characters
 */
void puts2(char *str)
{
int index;
int length = strlen(str);
for (index = 0; index <= length; index += 2)
_putchar(str[index]);
_putchar('\n');
}
