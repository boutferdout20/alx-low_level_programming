#include "main.h"
/**
 * set_bit - set bit indce egual 1
 * @n: pointeur
 * @index: index
 * Return: 1 success or -1 faild
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = ((1ul << index) | *n);
return (1);
}
