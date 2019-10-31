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
list_t *ch;
ch = head;
while (head != NULL)
{
ch = head;
head = head->next;
free(ch->str);
free(ch);
}
free(head);
}
