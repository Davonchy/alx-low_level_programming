#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: the destination string
 * @src: the source string.
 * @n: the number of characters to copy
 *
 * Return: poniter to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int len = 0;
while (src[i++])
len++;
for (i = 0; src[i] && i < n; i++)
dest[i] = src[i];
for (i = len; i < n; i++)
dest[i] = '\0';
return (dest);
}
