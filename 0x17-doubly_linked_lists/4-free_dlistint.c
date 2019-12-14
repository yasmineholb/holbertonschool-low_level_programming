#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *free_dlistint - function.
 *@head: param
 *Return: Return 0.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *s;
while (head != NULL)
{
s = head;
head = head->next;
free(s);
}
}
