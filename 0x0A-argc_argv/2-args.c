#include "main.h"
#include <stdlib.h>
/**
 * main - write function
 * @argc: num
 * @argv: array
 * Return: 0
 */
int main(int argc, char const *argv[])
{
int h;
for (h = 0; h < argc; h++)
{
printf("%s\n", argv[h]);
}
return (0);
}
