#include "hash_tables.h"
/**
 *key_index - fn key
 *@key: the key
 *@size: the size
 *Return: hash
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int i, m;
for (i = 0; i < size; i++)
m = hash_djb2(key);
return (m);
}
