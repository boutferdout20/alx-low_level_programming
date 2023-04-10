#include "main.h"
/**
 * main - function positive num
 * @argc: count
 * @argv: num
 * Return: 0
 */
int main(int argc, char const *argv[])
{
char const *h;
int s, m = 0;
for (s = 1; s < argc; s++)
{
int L = strtol(argv[s], &h, 10);
if (*h != '\0')
{
printf("Error\n");
return (1);
}
else
{
m += L;
}
}
printf("%d\n", m);
return (0);
}
