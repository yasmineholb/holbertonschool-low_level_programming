#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 **insert_dnodeint_at_index - function.
 *@h: param
 *@idx: param
 *@n: param
 *Return: Return 0.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *m;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
m = *h;
if (m == NULL)
{
new->prev = NULL;
new->next = NULL;
*h = new;
return (new);
}
if (idx == 0)
{
new->prev = NULL;
new->next = m;
m->prev = new;
*h = new;
return (new);
}
for ( ; idx > 1 && m->next; idx--)
m = m->next;
if (idx > 1 && m->next == NULL)
return (NULL);
new->prev = m;
new->next = m->next ? m->next : NULL;
if (m->next != NULL)
m->next->prev = new;
m->next = m->next && idx > 1 ? NULL : new;
return (new);
}
