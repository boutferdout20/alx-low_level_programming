#include "main.h"
int check_pal(char *s, int b, int twil);
int _strlen_recursion(char *s);
/**
 * is_palindrome - star of palindrome
 * @s: for reserve
 * Return: 1 is yes, 0 is not
 */
int is_palindrome(char *s)
{
if (*s == 0)
{
return (1);
}
return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - retu sting twil
 * @s: calcul for twil string
 * Return: twil string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - caracter for palindrome
 * @s: string for observetion
 * @b: iterator
 * @twil: twil for string
 * Return: palindrome is 1, if not 0
 */
int check_pal(char *s, int b, int twil)
{
if (*(s + b) != *(s + twil - 1))
{
return (0);
}
if (b >= twil)
{
return (1);
}
return (check_pal(s, b + 1, twil - 1));
}
