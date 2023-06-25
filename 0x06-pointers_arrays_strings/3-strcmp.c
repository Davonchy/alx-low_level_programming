#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings.
 * @s1: the first string to compare
 * @s2: the second string to compare
 *
 * Return: negative num if s1 is less than s2,
 * positive num if s1 is greater than s2.
 * otherwise 0.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
int num = s1[i] - s2[i];
for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
break;
}
return (num);
}
