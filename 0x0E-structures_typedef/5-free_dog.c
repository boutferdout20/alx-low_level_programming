#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - utilisation de allcation de la memoire
 * @d: structure de chein en free
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
