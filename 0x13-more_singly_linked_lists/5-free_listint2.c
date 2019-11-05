#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - fn
 *@head: param
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
listint_t *m, *n;
if (head == NULL)
{
return;
}
n = *head;
while (n != NULL)
{
m = n;
n = n->next;
free(m);
}
*head = NULL;
}
