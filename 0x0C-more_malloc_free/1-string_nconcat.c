#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - convert a un autre ligne
 * @s1: ligne1
 * @s2: ligne2
 * @n: num de ligne
 * Return: pointeur
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int a = 0, b = 0, lon1 = 0, lon2 = 0;
while (s1 && s1[lon1])
lon1++;
while (s2 && s2[lon2])
lon2++;
if (n < lon2)
s = malloc(sizeof(char) * (lon1 + n + 1));
else
s = malloc(sizeof(char) * (lon1 + lon2 + 1));
if (!s)
return (NULL);
while (a < lon1)
{
s[a] = s1[a];
a++;
}
while (n < lon2 && a < (lon1 + n))
{
s[a++] = s2[b++];
}
while (n >= lon2 && a < (lon1 + lon2))
{
s[a++] = s2[b++];
}
s[a] = '\0';
return (s);
}
