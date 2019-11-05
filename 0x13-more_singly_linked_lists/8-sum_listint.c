#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - fn
 *@head: param
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
{
int k;
k = 0;
while (head != NULL)
{
k += head->n;
head = head->next;
}
return (k);
}
