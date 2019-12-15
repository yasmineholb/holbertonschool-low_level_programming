#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *delete_dnodeint_at_index - fn
 *@head: param
 *@index: param
 * Return: Always 0.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *ch = *head;
if (*head == NULL)
return (-1);
for (; index != 0; index--)
{
if (!ch)
return (-1);
ch = ch->next;
}
if (ch == *head)
{
*head = ch->next;
if (*head)
(*head)->prev = NULL;
}
else
{
ch->prev->next = ch->next;
if (ch->next)
ch->next->prev = ch->prev;
}
free(ch);
return (1);
}
