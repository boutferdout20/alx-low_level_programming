#include <stdlib.h>
#include "main.h"
/**
 * binary_to_uint - conveter a un chiffre
 * @b: string
 * Return: chiffre
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int n = 0;
int a;
if (!b)
{
return (0);
}
for (a = 0; b[a]; a++)
{
if (b[a] < '0' || b[a] > '1')
return (0);
n = 2 * n + (b[a] - '0');
}
return (n);
}
