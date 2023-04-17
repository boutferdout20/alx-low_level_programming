#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - return a l'incrementetion
 * @s: ligne
 * Return: l'incre de ligne
 */
int _strlen(char *s)
{
int a;
a = 0;
while (s[a] != '\0')
{
a++;
}
return (a);
}
/**
 * *_strcpy - copie les lignes
 * @dest: pointeur
 * @src: ligne
 * Return: pointeur
 */
char *_strcpy(char *dest, char *src)
{
int lon, a;
lon = 0;
while (src[lon] != '\0')
{
lon++;
}
for (a = 0; a < lon; a++)
{
dest[a] = src[a];
}
dest[a] = '\0';
return (dest);
}
/**
 * new_dog - creation neuf chien
 * @name: le nom
 * @age: l'age
 * @owner: owner
 * Return: pointeur or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int lon1, lon2;
lon1 = _strlen(name);
lon2 = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
{
return (NULL);
}
dog->name = malloc(sizeof(char) * (lon1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (lon2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
