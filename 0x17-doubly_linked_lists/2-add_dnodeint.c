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
dlistint_t *ch;
ch = *head;
ch = malloc(sizeof(dlistint_t));
if (ch == NULL)
return (NULL);
ch->n = n;
if (*head)
(*head)->prev = ch;
ch->prev = NULL;
ch->next = *head;
*head = ch;
return (ch);
}
