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
char *tab;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
byt = atoi(argv[1]);
if (byt < 0)
{
printf("Error\n");
exit(2);
}
tab = (char *)main;
for (a = 0; a < byt; a++)
{
if (a == byt - 1)
{
printf("%02hhx\n", tab[a]);
break;
}
printf("%02hhx", tab[a]);
}
return (0);
}
