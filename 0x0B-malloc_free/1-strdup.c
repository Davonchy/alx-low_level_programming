#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: The string to be copied
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *
 * Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
char *duplicate;
int i;
int l;
l = 0;
if (str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
l++;
duplicate = malloc(sizeof(char) * (l + 1));
if (duplicate == NULL)
return (NULL);
for (i = 0; str[i]; i++)
duplicate[i] = str[i];
duplicate[l] = '\0';
return (duplicate);
}
