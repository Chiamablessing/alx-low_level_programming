# C - Search Algorithms

This was my ALX project on search algorithms. Search algorithm is an algorithm designed to solve a search problem.

## Header File

* search_algos.h: Header file containing definitions and prototypes for all types and functions written for the project.

### Data Structures

```
/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 * for ALX project
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 * for Holberton project
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;
```
## Tasks

- 0. Linear search

- 1. Binary search

- 2. Big O

- 3. Big O

- 4. Big O

- 5. Big O

- 6. Big O

```int **allocate_map(int n, int m)
{
    int **map;

    map = malloc(sizeof(int *) * n);
    for (size_t i = 0; i < n; i++)
    {
        map[i] = malloc(sizeof(int) * m);
		}
		return (map);
}
```

- 7. Jump search **100-jump.c**

- 8. Big O **101-O**

- 9. Interpolation search
    102-interpolation.c

- 10. Exponential search:
    103-exponential.c

- 11. Advanced binary search
    104-advanced_binary.c

- 12. Jump search in a singly linked list
    105-jump_list.c

- 13. Linear search in a skip list
    106-linear_skip.c

- 14. Big O
    107-O

- 15. Big O
    108-O

## Header Files
search_algos.h
[search_algos.h](https://github.com/Chiamablessing/alx-low_level_programming/blob/master/0x1E-search_algorithms/search_algos.h "Header Files")
