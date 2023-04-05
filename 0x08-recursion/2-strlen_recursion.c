#include "main.h"
/**
 * _strlen_recursion - write srting star jdid
 * @s: string for writing
 * Return: twil of string
 */
int _strlen_recursion(char *s)
{
int twil = 0;
if (*s)
{
twil++;
twil += _strlen_recursion(s + 1);
}
return (twil);
}
