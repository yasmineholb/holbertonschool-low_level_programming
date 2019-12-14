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
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new = NULL;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->prev = NULL;
new->next = *head;
if (*head)
{
(*head)->prev = NULL;
}
*head = new;
return (new);
}
