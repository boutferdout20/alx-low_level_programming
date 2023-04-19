#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - write elemnt in array
 * @array: tableau
 * @size: taille combien des element
 * @action: pointeur
 * Return: rien
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int q;
if (array == NULL || action == NULL)
{
return;
}
for (q = 0; q < size; q++)
{
action(array[q]);
}
}
