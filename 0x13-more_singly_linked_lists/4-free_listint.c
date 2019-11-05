#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
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
