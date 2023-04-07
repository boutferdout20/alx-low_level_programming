#include "main.h"
/**
 * _memset - fichier a la memoire
 * @s: line
 * @b: la valeur
 * @n: number de byte
 * Return: changer
 */
char *_memset(char *s, char b, unsigned int n)
{
int j = 0;
for (n > 0; j++;)
{
if (j < n)
{
s[j] = b;
}
}
return (s);
}
