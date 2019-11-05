#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *delete_nodeint_at_index - fn
 *@head: param
 *@index: param
 * Return: Always 0.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *m, *n;
unsigned int i;
n = *head;
if (*head == NULL)
return (-1);
if (index == 0)
{
(*head) = (*head)->next;
free(n);
return (1);
}
i = 0;
while (i < (index - 1))
{
if (n == NULL)
return (-1);
n = n->next;
i++;
}
m = n->next;
n->next = m->next;
free(m);
return (1);
}
