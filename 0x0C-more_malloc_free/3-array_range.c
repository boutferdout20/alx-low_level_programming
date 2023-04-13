#include "main.h"
#include <stdlib.h>
/**
 * *array_range - creation d'un tableau
 * @min: mini range
 * @max: maxi range
 * Return: tableau
 */
int *array_range(int min, int max)
{
int *p;
int a, siz;
if (min > max)
{
return (NULL);
}
siz = max - min + 1;
p = malloc(sizeof(int) * siz);
if (p == NULL)
{
return (NULL);
}
for (a = 0; min <= max; a++)
p[a] = min++;
return (p);
}
