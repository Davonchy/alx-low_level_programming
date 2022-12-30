#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: length of string to return
 *
 * Return: length
 */
int _strlen(char *s)
{
int length = 0;
while (*s++)
length++;
return (length);
}
