#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
  int i;
listint_t *k, *j;
k = *head;
if (k == NULL)
return (0);
j = k;
i = (*head)->n;
*head = (*head)->next;
free(j);

return (i);
}
