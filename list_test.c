#include "list.h"

int main(void){
    list* linkedList = create_list();

    printf("Creating the list... State of the list: ");
    linkedList != NULL ? puts("The list exists\n") : puts("The list does not exist\n"); 
    char* a = "S", *b = "I", *c = "G", *d = "R", *e = "O", *f = "C", *g = "E", *h = "v", *i = "O", *j = "L", *k = "I";
    add_to_list(linkedList, a);
    add_to_list(linkedList, b);
    add_to_list(linkedList, c);
    add_to_list(linkedList, d);
    add_to_list(linkedList, e);
    add_to_list(linkedList, f);
    add_to_list(linkedList, g);
    add_to_list(linkedList, h);
    add_to_list(linkedList, i);
    add_to_list(linkedList, j);
    add_to_list(linkedList, k);

    puts("\n");
    puts("Printing list: ");
    print_list(linkedList);
    puts("");

    puts("Removing first 3 items of the list:");
    for(int i = 0; i < 3; i++){
        printf("Removing from list: %s\n", remove_from_list(linkedList));
    }

    puts("\nCurrent list: ");
    print_list(linkedList);

    puts("\nFlushing list...");
    flush_list(linkedList);
    linkedList != NULL ? puts("State of list after flush: The list exists\n") : puts("State of list after flush: The list does not exist\n"); 

    puts("\nFreeing list...");
    free_list(linkedList);
    linkedList = NULL;
    linkedList != NULL ? puts("The list still exists\n") : puts("The list no longer exists\n"); 

}
