#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - fn
 *@head: parm
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
listint_t *m;
while (head != NULL)
{
m = head;
head = head->next;
free(m);
}
}
