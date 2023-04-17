#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialisation d'un variable struct dog
 * @d: pointeur
 * @name: le nom
 * @age: l'age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
