#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: The width of the dimensional array
 * @height: The height of the dimensional array
 *
 * Return: If width <= 0,height <= 0 or function fails,
 * otherwise - a pointer to a two dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
int **twoD;
int height_index;
int width_index;
if (width <= 0 || height <= 0)
return (NULL);
twoD = malloc(sizeof(int *) * height);
if (twoD == NULL)
return (NULL);
for (height_index = 0; height_index < height; height_index++)
{
twoD[height_index] = malloc(sizeof(int) * width);
if (twoD[height_index] == NULL)
{
for (; height_index >= 0; height_index--)
free(twoD[height_index]);
free(twoD);
return (NULL);
}
}
for (height_index = 0; height_index < height; height++)
{
for (width_index = 0; width_index < width; width++)
twoD[height_index][width_index] = 0;
}
return (twoD);
}
