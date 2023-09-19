#include "list.h"

int main(void) {
    // Create a new list
    list* linkedList = create_list();

    // Check and print the state of the created list
    printf("Creating the list... State of the list: ");
    linkedList != NULL ? puts("The list exists\n") : puts("The list does not exist\n");

    // Pre-defined string items to add to the list
    char* a = "S", *b = "I", *c = "G", *d = "R", *e = "O", *f = "C", *g = "E", *h = "v", *z = "O", *j = "L", *k = "I";

    // Add each string item to the list
    add_to_list(linkedList, a);
    add_to_list(linkedList, b);
    add_to_list(linkedList, c);
    add_to_list(linkedList, d);
    add_to_list(linkedList, e);
    add_to_list(linkedList, f);
    add_to_list(linkedList, g);
    add_to_list(linkedList, h);
    add_to_list(linkedList, z);
    add_to_list(linkedList, j);
    add_to_list(linkedList, k);

    puts("\n");
    // Print the state of the list after adding items
    puts("Printing list: ");
    print_list(linkedList);
    puts("");

    // Remove the first three items from the list
    puts("Removing first 3 items of the list:");
    size_t i;
    for (i = 0; i < 3; i++) {
        printf("Removing from list: %s\n", remove_from_list(linkedList));
    }

    // Print the state of the list after removing items
    puts("\nCurrent list: ");
    print_list(linkedList);

    // Flush (empty) the list without deleting the list structure
    puts("\nFlushing list...");
    flush_list(linkedList);
    // Check and print the state of the list after flushing
    linkedList != NULL ? puts("State of list after flush: The list exists\n") : puts("State of list after flush: The list does not exist\n");

    // Free all memory associated with the list and nullify the list pointer
    puts("\nFreeing list...");
    free_list(&linkedList);
    
    // Check and print the final state of the list
    linkedList != NULL ? puts("The list still exists\n") : puts("The list no longer exists\n");

    return 0; 
}
