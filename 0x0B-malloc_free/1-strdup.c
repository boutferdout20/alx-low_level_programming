#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function double de espace de la memoire
 * @str: charactere
 * Return: 0
 */
char *_strdup(char *str)
{
int k, l = 0;
char *h;
if (str == NULL)
{
return (NULL);
}
k = 0;
while (str[k] != '\0')
k++;
h = malloc(sizeof(char) * (k + 1));
if (h == NULL)
{
return (NULL);
}
for (l = 0; str[l]; l++)
h[l] = str[l];
return (h);
}
