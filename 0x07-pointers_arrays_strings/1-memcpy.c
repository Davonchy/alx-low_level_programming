#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: size of bytes to copy
 * @src: memory area to copy from
 * @dest: memory area to copy to
 *
 * Return: A pointer to the buffer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int index;
char *i = dest;
char *j = src;
for (index = 0; index < n; index++)
i[index] = j[index];
return (dest);
}
