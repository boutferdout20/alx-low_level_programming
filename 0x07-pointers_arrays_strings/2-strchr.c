#include "main.h"
/**
 * *_strchr - locates a character in string
 * @s: string search
 * @c: character to find
 * Return: a pointer to tha first occurreance of tha character
 * c in the string s, or NULL if the characteris not found
 */
char *_strchr(char *s, char c)
{
int i;
while (1)
{
i = *s++;
if (i == c)
{
return (s - 1);
}
if (i == 0)
{
return (NULL);
}
}
}
