#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - fn
 *@head: param
 * Return: Always 0.
 */
void free_list(list_t *head)
{
list_t *m;
while (head != NULL)
{
m = head;
head = head->next;
free(m->str);
free(m);
}
}
