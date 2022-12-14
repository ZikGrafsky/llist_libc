//////////////////////////////////////////////
// Created by GrafskyZik on 12/14/22.////////
////////////////////////////////////////////
#include "llist_libc.h"

t_linked_list *llist_new(void *data){
    t_linked_list *new = (t_linked_list *)malloc(sizeof(t_linked_list));

    new->prev = NULL;
    new->next = NULL;
    new->data = data;
    return new;
}