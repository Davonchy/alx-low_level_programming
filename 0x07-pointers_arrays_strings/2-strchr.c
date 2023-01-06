#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @c: the character to return a pointer to
 * @s: the string to locate c from
 *
 * Return: If c is found - a pointer to the first occurence
 * If c is not found - NULL
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (s + i);
}
return ('\0');
}
