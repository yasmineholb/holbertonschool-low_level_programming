#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - fn
 *@head: param
 *@n: param
 * Return: Always 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *m, *i;
m = malloc(sizeof(listint_t));
if (m == NULL)
{
return (NULL);
}
m->n = n;
m->next = NULL;
if (*head == NULL)
{
*head = m;
}
else
{
i = *head;
while (i->next != NULL)
i = i->next;
i->next = m;
}
return (m);
}
