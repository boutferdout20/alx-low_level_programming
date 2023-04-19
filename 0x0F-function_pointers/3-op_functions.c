#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - Returnee a le sum des numbers
 * @a: premiere chiffre
 * @b: deuxieme chiffre
 * Return: premiere ou deuxieme chiffre
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - Returnee a le sum des numbers
 * @a: premiere chiffre
 * @b: deuxieme chiffre
 * Return: premiere ou deuxieme chiffre
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - Returnee a la sum des numbers
 * @a: premiere chiffre
 * @b: deuxieme chiffre
 * Return: premiere ou deuxieme chiffre
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - Returnee a la sum des numbers
 * @a: premiere chiffre
 * @b: deuxieme chiffre
 * Return: premiere ou deuxieme chiffre
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - returnee le pourcentage de les deux chiffre
 * @a: premiere chiffre
 * @b: deuxieme chiffre
 * Return: poucentage des deux nombre
 */
int op_mod(int a, int b)
{
return (a % b);
}
