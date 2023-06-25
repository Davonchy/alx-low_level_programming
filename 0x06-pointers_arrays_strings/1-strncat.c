#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: the string destination
 * @src: the source string
 * @n: the number of characters to concatenate.
 *
 * Return: pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int len = strlen(dest);
for (i = 0; i < n && src[i] != '\0'; i++)
dest[len + i] = src[i];
return (dest);
}
