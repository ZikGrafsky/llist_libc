//////////////////////////////////////////////
// Created by GrafskyZik on 12/14/22.////////
////////////////////////////////////////////
#include "llist_libc.h"

void llist_push_back(t_linked_list *list, t_linked_list *new){
    if (list && new){
        t_linked_list *tmp = llist_get_last(list);
        new->prev = tmp;
        tmp->next = new;
    }
}