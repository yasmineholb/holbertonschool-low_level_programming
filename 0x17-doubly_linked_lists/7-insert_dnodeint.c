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
dlistint_t *ch, *pp, *m;
unsigned int i;
if (h == NULL && idx != 0)
return (NULL);
ch = *h;
pp = malloc(sizeof(dlistint_t));
if (!pp)
return (NULL);
pp->n = n;
if (idx == 0)
{
if (ch)
{
pp->next = ch;
ch->prev = pp;
}
else
pp->next = NULL;
pp->prev = NULL;
*h = pp;
return (*h);
}
for (i = 0; i < (idx - 1); i++)
{
if (ch == NULL)
{
return (NULL);
}
ch = ch->next;
}
if (ch == NULL)
{
return (NULL);
}
m = ch;
ch = ch->next;
m->next = pp;
pp->next = ch;
pp->prev = m;
return (pp);
}
