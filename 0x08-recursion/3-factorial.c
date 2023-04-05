#include "main.h"
/**
 * factorial - write strng with raqem
 * @n: raqem f return dial new raqem
 * Return: factorial f n
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
