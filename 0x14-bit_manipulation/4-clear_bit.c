#include "main.h"
/**
 * clear_bit - valeur 0
 * @n: pointeur
 * @index: index
 * Return: if 1 is success or not is faild
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1ul << index) & *n);
return (1);
}
