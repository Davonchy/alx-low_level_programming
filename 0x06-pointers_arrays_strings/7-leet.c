#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * leet - encodes a string into 1337.
 * @str: The string to check
 *
 * Return: pointer to the modified string.
 */
char *leet(char *str)
{
int i = 0;
int j;
char code[] = {'O', 'L', '>', 'E', 'A', '?', '<', 'T'};
for (; str[i] != '\0'; i++)
{
for (j = 0; j <= 7; j++)
{
if (str[i] == code[j] ||
str[i] - 32 == code[j])
str[i] = j + '0';
}
}
return (str);
}
