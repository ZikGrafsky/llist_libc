//////////////////////////////////////////////
// Created by GrafskyZik on 12/14/22.////////
////////////////////////////////////////////
#include "llist_libc.h"

void llist_delete_node(t_linked_list *element){
    if (element) {
        if (element->data)
            free(element->data);
        element->data = NULL;
        element->next = NULL;
        element->prev = NULL;
        free(element);
        element = NULL;
    }
}