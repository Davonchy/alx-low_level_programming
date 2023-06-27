#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * sep_of_wrd - check if a character is a seperator.
 * @str: the string to check.
 *
 * Return: 1 if seperator found else return 0.
 */
int sep_of_wrd(char str)
{
char sign[] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
'"', '(', ')', '{', '}'};
int i;
for (i = 0; sign[i] != '\0'; i++)
{
if (str == sign[i])
return (1);
}
return (0);
}
/**
 * cap_string - capitalizes all words of a string.
 * @str: string to modify
 *
 * Return: pointer to the modified string.
 */
char *cap_string(char *str)
{
int i;
int sign = 1;
for (i = 0; str[i] != '\0'; i++)
{
if (sign == 1 && (str[i] >= 'a' && str[i] <= 'z'))
{
str[i] = str[i] - 32;
sign = 0;
}
sign = sep_of_wrd(str[i]);
}
return (str);
}
