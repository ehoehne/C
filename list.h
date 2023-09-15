#ifndef LIST_H_
#define LIST_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node node;
typedef struct List list;

struct Node{
    char *item;
    node *next;
};

struct List{
    node *head;
    int size;
};

list* create_list();

int add_to_list(list* ll, char *item);

char* remove_from_list(list* ll);

void print_list(list* ll);

void flush_list(list* ll);

void free_list(list* ll);

#endif
