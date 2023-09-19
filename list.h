#ifndef LIST_H_           // Header guards to prevent double inclusion
#define LIST_H_

#include <stdio.h>       // Standard input-output library
#include <stdlib.h>      // Standard general utilities library
#include <string.h>      // String manipulation functions

// Type definitions to make the code cleaner
typedef struct Node node; // Alias for the Node struct
typedef struct List list; // Alias for the List struct

// Node structure representing an individual item in the list
struct Node {
    char *item;           // Pointer to the item (string in this case)
    node *next;           // Pointer to the next node in the list
};

// List structure representing the entire linked list
struct List {
    node *head;           // Pointer to the first node in the list
    int size;             // Number of items in the list
};

/*
 * Creates a new empty list.
 * Returns a pointer to the created list.
 */
list* create_list();

/*
 * Adds a new item to the list.
 * @param ll   Pointer to the list
 * @param item String to add to the list
 * Returns 0 if successful, non-zero otherwise.
 */
int add_to_list(list* ll, char *item);

/*
 * Removes and returns the last item from the list.
 * @param ll   Pointer to the list
 * Returns the removed string, or NULL if the list is empty.
 */
char* remove_from_list(list* ll);

/*
 * Prints the entire list to the console.
 * @param ll   Pointer to the list
 */
void print_list(list* ll);

/*
 * Empties the list but keeps the list structure intact.
 * @param ll   Pointer to the list
 */
void flush_list(list* ll);

/*
 * Frees all memory associated with the list, including the list itself.
 * @param ll   Pointer to the list
 */
void free_list(list** ll);

#endif // LIST_H_
