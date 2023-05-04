#include "main.h"
/**
 * get_bit - returner a valeur
 * @n: chiffre
 * @index: index
 * Return: valeur
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit;
if (index > 63)
return (-1);
bit = (n >> index) & 1;
return (bit);
}
