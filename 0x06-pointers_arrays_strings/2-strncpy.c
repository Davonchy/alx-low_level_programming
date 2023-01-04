#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string.
 * @dest: stores the string copied.
 * @src: the source string.
 * @n: the maximum number of bytes to copy from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0, src_size = 0;
while (src[i]++)
src_size++;
for (i = 0; src[i] && i < n; i++)
dest[i] = src[i];
for (i = src_size; i < n; i++)
dest[i] = '\0';
return (dest);
}
