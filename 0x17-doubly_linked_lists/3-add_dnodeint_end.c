#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 **add_dnodeint - function.
 *@head: param
 *@n: param
 *Return: Return 0.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *s;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;
new->prev =NULL;
if (*head == NULL)
{
*head = new;
}
else
{
s = *head;
while (s->next)
s = s->next;
new->prev = s;
s->next = new;
}
return (new);
}
