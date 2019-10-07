#include "holberton.h"
#include <stdio.h>
/**
 * *_memcpy - function
 * @dest: parametre
 * @src: parametre
 * @n: parametre
 * Return: char.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int index;
char *memory = dest, *memory1 = src;
for (index = 0; index < n; index++)
memory[index] = memory1[index];
return (memory);
}
