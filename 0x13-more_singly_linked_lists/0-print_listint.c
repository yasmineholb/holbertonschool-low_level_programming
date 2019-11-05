#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - fn
 *@h: param
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
listint_t *t;
size_t k = 0;
for (t = (listint_t *)h; t != NULL; t = t->next)
{
if (t->n)
printf("%u\n", t->n);
else
printf("0");
k++;
}
return (k);
}
