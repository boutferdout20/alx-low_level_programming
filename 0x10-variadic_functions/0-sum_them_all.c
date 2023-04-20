#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - function
 * @n: number conststnte
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int q;
va_list args;
if (n == 0)
{
return (0);
}
va_start(args, n);
for (q = 0; q < n; q++)
{
sum += va_arg(args, int);
}
va_end(args);
return (sum);
}
