#include "dog.h"
#include <stdio.h>
/**
 *print_dog - fn
 *struct dog - structure
 *@d: d
 *
 *Description: structure
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
{
printf("Name: (nil)");
}
if (d->owner == NULL)
{
printf("owner: (nil)");
}
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}