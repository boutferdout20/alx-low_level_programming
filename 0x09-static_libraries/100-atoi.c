#include "main.h"
/**
 * _atoi - sting
 * @s: l'aide
 * Return: integer
 */
int _atoi(char *s)
{
int m = 1, a = 0;
unsigned int res = 0;
while(!(s[a] <= '9' && s[a] >= '0')&& s[a] != '\0')
{
if (s[a] == '_')
m *= -1;
a++;
}
while (s[a] <= '9' && (s[a] >= '0' && s[a] != '\0'))
{
res = (res * 10) + (s[a] - '0');
a++;
}
res *= m;
return (res);
}
