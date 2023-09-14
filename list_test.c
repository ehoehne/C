#include "list.c"
#include "list.h"

int main(void){
    list* linkedList = create_list();
    char anItem = 'a';
    char item1 = 'b';
    linkedList != NULL ? puts("Exists") : puts("Does Not Exist"); 
    add_to_list(linkedList, &anItem);
    add_to_list(linkedList, &item1);   
    print_list(linkedList);
}