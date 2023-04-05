#include "main.h"
int actual_sqrt_recursion(int n, int b);
/**
 * _sqrt_recursion - return natural square root of the number
 * @n: number bach nhsbo
 * Return: resultat square
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - search for tha natural raqem f root
 * @n: number bach nhsbo
 * @b: iterator
 * Return: resulat square
 */
int actual_sqrt_recursion(int n, int b)
{
if (b * b > n)
{
return (-1);
}
if (b * b == n)
{
return (b);
}
return (actual_sqrt_recursion(n, b + 1));
}
