#include "function_pointers.h"
/**
 * int_index - index plase de return
 * @array: tableau
 * @size: la taille
 * @cmp: pointeur
 * Return: rien
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int q;
if (array == NULL || size <= 0 || cmp == NULL)
{
return (-1);
}
for (q = 0; q < size; q++)
{
if (cmp(array[q]))
return (q);
}
return (-1);
}
