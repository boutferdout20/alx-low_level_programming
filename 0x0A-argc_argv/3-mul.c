#include "main.h"
/**
 * main - multiplication
 * @argc: count
 * @argv: num
 * atoi: convert
 * Return: 0 or Error
 */
int main(int argc, char const *argv[])
{
int s, m = 1;
if (argc <= 2)
{
printf("Error\n");
return (1);
}
else
{
for (s = 1; s < argc; s++)
{
int p = atoi(argv[s]);
m *= p;
}
printf("%d\n", m);
}
return (0);
}
