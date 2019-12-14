#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *get_dnodeint_at_index - function.
 *@head: param
 *@index: param
 *Return: Return 0.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
while (i != index)
{
head = head->next;
if (head == NULL)
return (NULL);
i++;
}
return (head);
}
