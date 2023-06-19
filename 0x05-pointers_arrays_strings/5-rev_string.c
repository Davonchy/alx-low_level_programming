#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string.
 * @s: the string to reverse
 */
void rev_string(char *s)
{
char temp;
int i;
int length = strlen(s);
int middle = length / 2;
for (i = 0; i < middle; i++)
{
temp = s[i];
s[i] = s[length - 1 - i];
s[length - 1 - i] = temp;
}
}
