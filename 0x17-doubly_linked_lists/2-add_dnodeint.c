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
dlistint_t *new;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (*head);
}
