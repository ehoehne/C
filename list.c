#include "list.h"

//create the list
list* create_list(){
    list* new_list = (list*)malloc(sizeof(list));
    new_list->size = 0;
    new_list->head = NULL;
    return new_list;
}

//add a node to the list
int add_to_list(list* ll, char *item){
    node* new_node = (node*)malloc(sizeof(node));
    new_node->item = strdup(item);

    if(!ll->size){
        ll->head = new_node;
        ll->size++;
        return 0;
    }

    new_node->next = ll->head;
    ll->head = new_node;
    ll->size++;
    return 0;
}

//remove a node from the list
char* remove_from_list(list* ll){
    if (ll == NULL || ll->size == 0) {
        return NULL;
    }
    node* node_to_remove = ll->head;
    char* item = node_to_remove->item;
    ll->head = node_to_remove->next;
    free(node_to_remove);
    ll->size--;
    return item;
}

//print the list 
void print_list(list* ll){
    node* current = ll->head;
    int count = ll->size;
    while (current != NULL) {
        printf("List item %d: %s\n", count, current->item);
        current = current->next;
        count--;
    }
}

//emptys the list, but doesnt delete it
void flush_list(list* ll){
    while (ll->size > 0) {
        char* removed_item = remove_from_list(ll);
        free(removed_item);
    }
}

//frees the list, changing it to null
void free_list(list **ll){
    if (ll == NULL || *ll == NULL) return;

    node* current_node = (*ll)->head;
    while (current_node != NULL) {
        node* next_node = current_node->next;
        free(current_node);
        current_node = next_node;
    }
    (*ll)->head = NULL;
    free(*ll);
    *ll = NULL;
}
