#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * is_digit - checking the countains
 * @s: ligne pour evaluer
 * Return: 0 or 1
 */
int is_digit(char *s)
{
int a = 0;
while (s[a])
if (s[a] < '0' || s[a] > '9')
{
return (0);
a++;
}
return (1);
}
/**
 * _strlen - reteurn a l'incrementation
 * @s: ligne evaluer
 * Return: l'incremetetion de ligne
 */
int _strlen(char *s)
{
int a = 0;
while (s[a] != '\0')
a++;
return (a);
}
/**
 * errors - error defaut en resultat
 */
void errors(void)
{
printf("Error\n");
exit(98);
}
/**
 * main - function double de number positif
 * @argc: num
 * @argv: tableau
 * Return: 0
 */
int main(int argc, char *argv[])
{
char *st1, *st2;
int lon1, lon2, lon, a, po, d1, d2, *res, b = 0;
st1 = argv[1], st2 = argv[2];
if (argc != 3 || !is_digit(st1) || !is_digit(st2))
errors();
lon1 = _strlen(st1);
lon2 = _strlen(st2);
lon = lon1 + lon2 + 1;
res = malloc(sizeof(int) * lon);
if (!res)
return (1);
for (a = 0; a <= lon1 + lon2; a++)
res[a] = 0;
for (lon1 = lon1 - 1; lon1 >= 0; lon1--)
{
d1 = st1[lon1] - '0';
po = 0;
for (lon2 = _strlen(st2) - 1; lon2 >= 0; lon2--)
d2 = st2[lon2] - '0';
po += res[lon1 + lon2 + 1] + (d1 *d2);
res[lon1 + lon2 + 1] = po % 10;
po /= 10;
if (po > 0)
res[lon1 + lon2 + 1] += po;
}
for (a = 0; a < lon - 1; a++)
{
if (res[a])
b = 1;
if (b)
_putchar(res[a] + '0');
}
if (!b)
_putchar('0');
_putchar('\n');
free(res);
return (0);
}
