#include "hash_tables.h"
/**
 *hash_table_get - fn to get
 *@key: the key
 *@ht: hash
 *Return: hash
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int m;
hash_node_t *t;
if (!ht || !key)
return (NULL);
m = key_index((unsigned char *)key, ht->size);
if (ht->array[m])
{
t = ht->array[m];
while (t)
{
if (strcmp(t->key, key) == 0)
return (t->value);
t = t->next;
}
}
return (NULL);
}
