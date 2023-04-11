#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function
 * @width: width
 * @height: height
 * Return:array or 2
 */
int **alloc_grid(int width, int height)
{
int **yoo;
int v, d;
if (width <= 0 || height <= 0)
return (NULL);
yoo = malloc(sizeof(int *) * height);
if (yoo == NULL)
{
return (NULL);
}
for (v = 0; v < height; v++)
{
yoo[v] = malloc(sizeof(int) * width);
if (yoo[v] == NULL)
{
for (; v >= 0; v--)
free(yoo[v]);
free(yoo);
return (NULL);
}
}
for (v = 0; v < height; v++)
{
for (d = 0; d < width; d++)
yoo[v][d] = 0;
}
return (yoo);
}
