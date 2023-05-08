#include <stdio.h>

/**
 * _isalpha - checks for alphabetic character.
 * @c: letters to check for.
 *
 * Return: if true - 1, if false 0.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}
