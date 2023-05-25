#include <stdio.h>

/**
 * _isupper - checks for uppercase character.
 * @c: The character to check
 *
 * Return: 1 if c is uppercase otherwise 0.
 */
int _isupper(int c)
{
if (c >= 'a' && c <= 'z')
return (0);
else 
return (1);
}
