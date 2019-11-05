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
size_t k = 0, m = 0;
if (h == NULL)
return (m);
while (h != NULL)
{
printf("%d\n", h->n);
k++;
h = h->next;
}
return (k);
}
