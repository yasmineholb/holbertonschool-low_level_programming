#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *sum_dlistint - function.
 *@head: param
 *Return: Return 0.
 */
int sum_dlistint(dlistint_t *head)
{
int i = 0;
while (head)
{
i += head->n;
head = head->next;
}
return (i);
}
