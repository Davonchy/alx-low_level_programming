#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * rot13 - encodes a string using rot13.
 * @str: the string to convert
 *
 * Return: pointer to the modified string
 */
char *rot13(char *str)
{
int i = 0;
for (; str[i] != '\0'; i++)
{
while (((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M')))
{
str[i] = str[i] + 13;
i++;
}
if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
str[i] -= 13;
}
return (str);
}
