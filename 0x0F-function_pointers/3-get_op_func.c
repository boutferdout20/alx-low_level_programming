#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - execute la function correct
 * @s: les argumemnts et les oprateurs
 * Return: une function partir a la pointeur
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL},
};
int g = 0;
while (g < 5)
{
if (*s == *ops[g].op)
return (ops[g].f);
g++;
}
return (NULL);
}
