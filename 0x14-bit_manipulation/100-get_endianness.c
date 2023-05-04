#include "main.h"
/**
 * get_endianness - checher
 * Return: 0 ila kan kbir, 1 ila kan sghir
 */
int get_endianness(void)
{
unsigned int a = 1;
char *c = (char *)&a;
return (*c);
}
