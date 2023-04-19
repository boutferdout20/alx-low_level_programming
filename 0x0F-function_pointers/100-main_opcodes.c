#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - founction for write
 * @argc: chiffre de arguments
 * @argv: tableau de argumements
 * Return: 0
 */
int main(int argc, char *argv[])
{
int byt, a;
char *pt = (char *)main;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
a = atoi(argv[1]);
if (a < 0)
{
printf("Error\n");
exit(2);
}
for (byt = 0; byt < a; byt++)
{
printf("%02x", pt[byt] & 0xFF);
if (byt != a - 1)
printf(" ");
}
printf("\n");
return (0);
}
