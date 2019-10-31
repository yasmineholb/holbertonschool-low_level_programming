#include <stdlib.h>
#include "lists.h"

/**
 * free_list - a function
 * @head: param
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
