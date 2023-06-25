#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @src: the source string
 * @dest: the destination
 *
 * Return: a pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
int i;
int src_len = strlen(src);
int len = strlen(dest);
for (i = 0; i <= src_len; i++)
dest[len + i] = src[i];
return (dest);
}
