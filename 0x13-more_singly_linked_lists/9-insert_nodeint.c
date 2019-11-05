#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *insert_nodeint_at_index - fn
 *@head: param
 *@idx: param
 *@n: param
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *m, *p;
unsigned int i = 0;
if (head == NULL)
return (NULL);
m = malloc(sizeof(listint_t));
if (m == NULL)
return (NULL);
m->n = n;
p = *head;
if (idx == 0)
{
m->next = (*head)->next;
(*head)->next = m;
return (m);
}
while (p && (i != idx))
{
p = p->next;
i++;
if (p == NULL)
return (NULL);
if (i == idx - 1)
{
m->next = p->next;
p->next = m;
return (m);
}
}
return (m);
}
