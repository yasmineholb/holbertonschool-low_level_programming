#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **new_dog - main -fn
 *struct dog - structure
 *@name: n
 *@age: a
 *@owner: o
 *Return: dog1
 *Description: structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog1;
int i = 0, j = 0, k = 0;
while (name[i] != '\0')
i++;
while (owner[j] != '\0')
j++;
dog1 = malloc(sizeof(dog_t));
if (dog1 == NULL)
{
return (NULL);
}
dog1->name = malloc(i *sizeof(dog1->name));
if (dog1 == NULL)
{
return (NULL);
}
for (k = 0; k < i; k++)
{
dog1->name[k] = name[k];
}
dog1->age = age;
dog1->owner = malloc(j *sizeof(dog1->owner));
if (dog1 == NULL)
{
return (NULL);
}
for (k = 0; k < j; k++)
{
dog1->owner[k] = owner[k];
}
return (dog1);
}
