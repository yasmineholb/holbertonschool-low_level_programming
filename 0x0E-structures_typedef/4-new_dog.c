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
int i; 
int j = 0, k = 0;
dog_t *dog1;
if (name == NULL || owner == NULL)
return (NULL);
dog1 = malloc(sizeof(dog_t));
if (dog1 == NULL)
return (NULL);
for (i = 0; name[i] != '\0'; i++)
j++;
dog1->name = malloc(sizeof(char) * (j + 1));
if (dog1->name == NULL)
{
return (NULL);
}
for (i = 0; name[i] != '\0'; i++)
dog1->name[i] = name[i];
dog1->name[i] = '\0';
dog1->age = age;
for (i = 0; owner[i] != '\0'; i++)
k++;
dog1->owner = malloc(sizeof(char) * (k + 1));
if (dog1->owner == NULL)
{
return (NULL);
}
for (i = 0; owner[i] != '\0'; i++)
dog1->owner[i] = owner[i];
dog1->owner[i] = '\0';
return (dog1);
}
