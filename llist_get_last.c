//////////////////////////////////////////////
// Created by GrafskyZik on 12/14/22.////////
////////////////////////////////////////////

#include "llist_libc.h"

t_linked_list *llist_get_last(t_linked_list *llist){
    t_linked_list *ret = llist;

    while (ret && ret->next != NULL)
        ret = ret->next;
    return ret;
}