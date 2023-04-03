#include <stdio.h>
/**
 * print_diagsums - the sum print
 * @a: pointer input
 * @size: size matrix
 */
void print_diagsums(int *a, int size)
{
int j, su1, su2;
su1 = 0;
su2 = 0;
for (j = 0; j < (size * size); j++)
{
if (j % (size + 1) == 0)
	su1 += a[j];
if (j % (size - 1) == 0 && j != 0 && j < size * size - 1)
	su2 += a[j];
}
printf("%d, %d\n", su1, su2);
}
