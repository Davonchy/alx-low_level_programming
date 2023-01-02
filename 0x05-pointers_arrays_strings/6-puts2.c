#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * starting from the first character
 * @str: string containing the characters
 */
void puts2(char *str)
{
int i = 0, n = 0;
while (str[i++])
n++;
for (i = 0; i < n; i += 2)
putchar(str[i]);
putchar('\n');
}
