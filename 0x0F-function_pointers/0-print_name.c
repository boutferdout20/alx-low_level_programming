#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - ecrire un nom de pointeur a function
 * @name: ligne ajouter
 * @f: le nom de funtion
 * Return: rien
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
f(name);
}
