#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: the string to print.
 */
void puts_half(char *str)
{
int index = 0;
int n;
while (*(str + index) != '\0')
{
index++;
}
if ((index % 2) == 1)
{
n = (index - 1) / 2;
n += 1;
}
else
{
n = index / 2;
}
for (; n < index; n++)
{
_putchar(str[n]);
}
_putchar('\n');
}
