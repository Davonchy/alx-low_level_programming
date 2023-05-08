#include <stdio.h>

/**
 * _islower - checks for lowercase character.
 *
 * @c: letters to check for
 *
 * Return: 1 if letter is lowercase, otherwise 0.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);
}
