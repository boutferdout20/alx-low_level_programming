#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - realloc un memoire malloc and free
 * @ptr: pointuer sur la memoire
 * @old_size: taille de allocation
 * @new_size: taille de neuf memoire
 * Return: pointeur
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;
char *old_p;
unsigned int a;
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}
if (!ptr)
return (malloc(new_size));
p = malloc(new_size);
if (!p)
return (NULL);
old_p = ptr;
if (new_size < old_size)
{
for (a = 0; a < new_size; a++)
p[a] = old_p[a];
}
if (new_size > old_size)
{
for (a = 0; a < old_size; a++)
p[a] = old_p[a];
}
free(ptr);
return (p);
}
