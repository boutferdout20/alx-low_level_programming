#include "main.h"
int actual_prime(int n, int b);
/**
 * is_prime_number - writeof that string
 * @n: number
 * Return:1 if nnumber, 0 if not
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (actual_prime(n, n - 1));
}
/**
 * actual_prime - number prime
 * @n: evaualt num
 * @b: iterator
 * Return: 1 if n prime if not equal a 0
 */
int actual_prime(int n, int b)
{
if (b == 1)
{
return (1);
}
if (n % b == 0 && b > 0)
{
return (0);
}
return (actual_prime(n, b - 1));
}
