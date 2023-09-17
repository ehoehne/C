#include "list.h"

/**
 * Creates a new empty list and returns its pointer.
 * Memory for the list is dynamically allocated.
 */
list* create_list(){
    list* new_list = (list*)malloc(sizeof(list));
    new_list->size = 0;          // Initialize list size to 0
    new_list->head = NULL;       // Initialize head pointer to NULL
    return new_list;             // Return the newly created list pointer
}

/**
 * Adds a new node with the given item to the front of the list.
 * @param ll   Pointer to the list
 * @param item The string to add to the list
 * @return 0 if successful.
 */
int add_to_list(list* ll, char *item){
    node* new_node = (node*)malloc(sizeof(node));      // Allocate memory for a new node
    new_node->item = strdup(item);                     // Duplicate the string to store in the node

    // If the list is empty, make the new node the head of the list
    if(!ll->size){
        ll->head = new_node;
        ll->size++;
        return 0;
    }

    // If the list is not empty, prepend the new node
    new_node->next = ll->head;
    ll->head = new_node;
    ll->size++;
    return 0;
}

/**
 * Removes and returns the item from the front node of the list.
 * @param ll   Pointer to the list
 * @return The item from the removed node, or NULL if the list is empty.
 */
char* remove_from_list(list* ll){
    // Check for an empty list or null pointer
    if (ll == NULL || ll->size == 0) {
        return NULL;
    }

    node* node_to_remove = ll->head;              // Node to be removed is the current head
    char* item = node_to_remove->item;            // Store the item to return
    ll->head = node_to_remove->next;              // Update head pointer to the next node
    free(node_to_remove);                         // Free the memory of removed node
    ll->size--;                                   // Decrease the size of the list
    return item;
}

/**
 * Prints all the items in the list to the console.
 * @param ll   Pointer to the list
 */
void print_list(list* ll){
    node* current = ll->head;             // Start at the head of the list
    int count = ll->size;                 // Counter for list position

    // Traverse the list while printing each item
    while (current != NULL) {
        printf("List item %d: %s\n", count, current->item);
        current = current->next;
        count--;
    }
}

/**
 * Empties the list by removing all nodes.
 * The memory for each node's item and the node itself is freed.
 * @param ll   Pointer to the list
 */
void flush_list(list* ll){
    // Remove and free nodes until the list is empty
    while (ll->size > 0) {
        char* removed_item = remove_from_list(ll);
        free(removed_item);              // Free the memory of the item from the removed node
    }
}

/**
 * Frees all memory associated with the list and all its nodes.
 * After this function, the list pointer should not be used.
 * @param ll   Pointer to the list
 */
void free_list(list* ll){
    node* current_node = ll->head;      // Start at the head of the list

    // Free each node in the list
    while (current_node != NULL) {
        node* next_node = current_node->next; // Store the next node
        free(current_node);                  // Free the current node
        current_node = next_node;            // Move to the next node
    }

    free(ll);                              // Free the memory of the list itself
}
