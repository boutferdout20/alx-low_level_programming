#include "main.h"
/**
 * flip_bits - chenger le chiffre
 * @n: premiere chiffre
 * @m: duexieme chiffre
 * Return: changer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int a, c = 0;
unsigned long int cu;
unsigned long int exclusive = n ^ m;
for (a = 63; a >= 0; a--)
{
cu = exclusive >> a;
if (cu & 1)
c++;
}
return (c);
}
