#include "main.h"
/**
 * _memcpy - function
 * @dest: memoire
 * @src: memoir
 * @n: num byte
 * Return: changer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int a = 0;
while (a < n)
{
dest[a] = src[a];
a++;
}
return dest;
}
