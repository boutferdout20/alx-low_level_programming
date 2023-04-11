#include "main.h"
#include <stdlib.h>
/**
 * count_word - function pour l'aide
 * @s: star
 * Return: numero
 */
int count_word(char *s)
{
int flag, e, o;
flag = 0;
o = 0;
for (e = 0; s[e] != '\0'; e++)
{
if (s[e] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
o++;
}
}
return (o);
}
/**
 * **strtow - ligne
 * @str: star
 * Return: succes or error
 */
char **strtow(char *str)
{
char **mat, *tm;
int p, l = 0, lon = 0, words, y = 0, start, end;
while (*(str + lon))
lon++;
words = count_word(str);
if (words == 0)
{
return (NULL);
}
mat = (char **)malloc(sizeof(char *) * (words + 1));
if (mat == NULL)
{
return (NULL);
}
for (p = 0; p <= lon; p++)
{
if (str[p] == ' ' || str[p] == '\0')
{
if (y)
{
end = p;
tm = (char *)malloc(sizeof(char) * (y + 1));
if (tm == NULL)
{
return (NULL);
}
while (start < end)
*tm++ = str[start++];
*tm = '\0';
mat[l] = tm - y;
l++;
y = 0;
}
}
else if (y++ == 0)
start = p;
}
mat[l] = NULL;
return (mat);
}
