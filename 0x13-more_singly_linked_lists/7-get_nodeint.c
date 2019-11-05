#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - fn
 *@head: param
 *@index: param
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
