#include "main.h"
#include <stdlib.h>
/**
 * *_memset - fichier
 * @s: memoire
 * @b: charactere
 * @n: numero
 * Return: pointeur
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
{
s[a] = b;
}
return (s);
}
/**
 * *_calloc - calloc l'allocation de memoire de tableau
 * @nmemb: numero
 * @size: taille
 * Return: aloccation de memoire
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *pr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
pr = malloc(size * nmemb);
if (pr == NULL)
{
return (NULL);
}
_memset(pr, 0, nmemb * size);
return (pr);
}
