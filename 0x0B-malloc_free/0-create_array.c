#include "main.h"
#include <stdlib.h>
/**
 * create_array - function
 * @size: taille de tableau
 * @c: character
 * Return: pointeur tableau, NULL is fail
 */
char *create_array(unsigned int size, char c)
{
unsigned int a;
char *array;
array = malloc(sizeof(char) * size);
if (size == 0 || array == NULL)
{
return (NULL);
}
for (a = 0; a < size; a++)
array[a] = c;
{
return (array);
}
}
