#include "main.h"
#include <stdlib.h>
/**
 * str_concat - ajouter la fin
 * @s1: count
 * @s2: count
 * Return: s1 or s2
 */
char *str_concat(char *s1, char *s2)
{
char *aprl;
int p, fu;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
p = fu = 0;
while (s1[p] != '\0')
p++;
while (s2[fu] != '\0')
fu++;
aprl = malloc(sizeof(char) * (p + fu + 1));
if (aprl == NULL)
{
return (NULL);
}
p = fu = 0;
while (s1[p] != '\0')
{
aprl[p] = s1[p];
p++;
}
while (s2[fu] != '\0')
{
aprl[p] = s2[fu];
p++, fu++;
}
aprl[p] = '\0';
return (aprl);
}
