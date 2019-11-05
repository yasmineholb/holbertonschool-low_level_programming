#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - fn
 *@head: param
 * Return: Always 0.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *m, *n = 0;
while (*head != NULL)
{
m = (*head)->next;
(*head)->next = n;
n = *head;
*head = m;
}
*head = n;
return (*head);
}
