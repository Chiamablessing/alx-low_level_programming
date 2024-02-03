# 0x1A. C - Hash table's

This project focuses on implementing hash functions and hash tables in C.

## Data Structures

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;

### Hash Function
A hash function takes a key as an input, which is associated with a datum or record and used to identify it to the data storage and retrieval application.

**What makes a good hash function**?

* It should be fast and computationally efficient.
* It should produce a unique hash value for each distinct input.
* It should evenly distribute the hash values across the hash table to minimize collisions.
* It should minimize the likelihood of generating the same hash value for different inputs (avoiding hash collisions).
* It should have a consistent output for the same input.

