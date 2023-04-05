#include "main.h"
/**
 * _strlen_recursion - write string
 * @s: write of string
 * Return: long
 */
int _strlen_recursion(char *s)
{
int tw =0;
while (*s != '\0')
{
tw++;
s++;
}
return(tw);
}
