#ifndef file
#define file
#include <stdio.h>
/**
 *struct dog - structure
 *@name: n
 *@age: a
 *@owner: o
 *
 *Description: structure
 */
struct dog
{
char *name;
float age;
char *owner;
};
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
