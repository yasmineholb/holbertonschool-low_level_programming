#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - fn
 *@h: param
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
list_t *s;
size_t k = 0;
for (s = (list_t *)h; s != NULL; s = s->next)
{
if (s->str)
printf("[%u] %s\n", s->len, s->str);
else
printf("[0] (nil)\n");
k++;
}
return (k);
}
