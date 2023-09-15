#include "list.c"
#include "list.h"

int main(void){
    list* linkedList = create_list();
    char *testStrings[] = {
        "apple",
        "banana",
        "cherry",
        "date",
        "elderberry",
        "fig",
        "grape",
        "honeydew",
        "kiwi",
        "lemon"
    };

    int numStrings = sizeof(testStrings) / sizeof(testStrings[0]);

    printf("Creating the list... State of the list: ");
    linkedList != NULL ? puts("The list exists\n") : puts("The list does not exist\n"); 

    puts("Loading the list with the following strings:");
    for(int i = 0; i < numStrings; i++){
        if(i == numStrings - 1){
            printf(" %s", testStrings[i]);
        }
        else{
            printf(" %s,", testStrings[i]);
        }
        add_to_list(linkedList, testStrings[i]);
    }

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

    puts("\n Flushing list...");
    flush_list(linkedList);
    linkedList != NULL ? puts("State of list after flush: The list exists\n") : puts("State of list after flush: The list does not exist\n"); 

    puts("\nFreeing list...");
    free_list(linkedList);
    linkedList != NULL ? puts("The list still exists\n") : puts("The list no longer exists\n"); 

}
