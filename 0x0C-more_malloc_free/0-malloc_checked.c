#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - location de la memoire
 * @b: num
 * Return: location
 */
void *malloc_checked(unsigned int b)
{
void *pr;
pr = malloc(b);
if (pr == NULL)
{
exit(98);
}
return (pr);
}
