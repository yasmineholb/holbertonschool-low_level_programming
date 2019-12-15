#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_dnodeint_end - function.
 *@head: param
 *@n: param
 *Return: Return 0.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *ch, *m;
ch = malloc(sizeof(dlistint_t));
if (ch == NULL)
return (NULL);
ch->n = n;
ch->next = NULL;
if (*head == NULL)
{
ch->prev = NULL;
*head = ch;
return (ch);
}
m = *head;
while (m->next != NULL)
m = m->next;
m->next = ch;
ch->prev = m;
return (ch);
}









