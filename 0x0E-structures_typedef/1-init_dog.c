#include "dog.h"
#include <stdio.h>
/**
 *init_dog - fn
 *struct dog - structure
 *@d: d
 *@name: n
 *@age: a
 *@owner: o
 *
 *Description: structure
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == 0)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
