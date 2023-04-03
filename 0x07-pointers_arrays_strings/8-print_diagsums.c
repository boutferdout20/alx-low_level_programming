#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
int b, m1, m2;
m1 = 0;
m2  = 0;
for (b = 0; b < (size * size); b++)
{
if (b % (size + 1) == 0)
m1 += a[b];
if (b % (size - 1) == 0 && b != 0 && b < size * size - 1)
m2 += a[b];
}
printf("%d,%d\n", m1, m2);
}
