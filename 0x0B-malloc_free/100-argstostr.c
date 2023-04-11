#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function
 * @ac: number
 * @av: tableau
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
int j, k, l = 0, m = 0;
char *ligne;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (j = 0; j < ac; j++)
{
for (k = 0; av[j][k]; k++)
m++;
}
m += ac;
ligne = malloc(sizeof(char) * m + 1);
if (ligne == NULL)
{
return (NULL);
}
for (j = 0; j < ac; j++)
{
for (k = 0; av[j][k]; k++)
{
ligne[l] = av[j][k];
l++;
}
if (ligne[l] == '\0')
{
ligne[l++] = '\n';
}
}
return (ligne);
}
