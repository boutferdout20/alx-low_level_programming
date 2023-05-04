#include "main.h"
/**
 * print_binary - write the binary
 * @n: chiffre
 */
void print_binary(unsigned long int n)
{
int a, c = 0;
unsigned long int cu;
for (a = 63; a >= 0; a--)
{
cu = n >> a;
if (cu & 1)
{
_putchar('1');
c++;
}
else if (c)
_putchar('0');
}
if (!c)
_putchar('0');
}
