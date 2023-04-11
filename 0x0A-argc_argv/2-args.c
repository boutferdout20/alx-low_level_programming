#include "main.h"
#include <stdlib.h>
/**
 * main - write
 * @argc: counte
 * @argv: array
 * Return: 0
 */
int main(int argc, char const *argv[])
{
int b;
for (b = 0; b < argc; b++)
{
printf("%s\n", argv[b]);
}
return (0);
}
