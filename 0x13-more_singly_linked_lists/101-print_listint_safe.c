#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - fn
 *@head: param
 * Return: Always 0.
 */
size_t print_listint_safe(const listint_t *h)
{
int k = 0, i;
const listint_t *n, *m;
n = h;
while (n)
{
m = h;
i = 0;
while (i < k)
{
if (m == n)
{
printf("-> [%p] %d\n", (void *) n, n->n);
return (i);
}
m = m->next;
i++;
}
printf("[%p] %d\n", (void *) n, n->n);
n = n->next;
k++;
}
return (k);
}
