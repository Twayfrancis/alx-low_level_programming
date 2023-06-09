#include "hash_tables.h"
/**
 * key_index - gives index of key in hash table array
 * @key: the key
 * @size: Size of array
 * Author Tway
 * Return: index at which key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
