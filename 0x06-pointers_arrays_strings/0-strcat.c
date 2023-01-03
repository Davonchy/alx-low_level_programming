#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * null byte, to the end of the string pointed to by @dest.
 *  @dest: A pointer to the string to be concatenated upon.
 *  @src: The source string to be appended to @dest.
 *
 *  Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
int n;
int m;
n = 0;
while (dest[n] != '\0')
{
n++;
}
m = 0;
while (src[m] != '\0')
{
dest[n] = src[m];
m++;
n++;
}
dest[n] = '\0';
return (dest);
}
