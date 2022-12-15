//////////////////////////////////////////////
// Created by GrafskyZik on 12/14/22.////////
////////////////////////////////////////////
#include "llist_libc.h"

t_linked_list *llist_get_first(const t_linked_list *linked_list){
    t_linked_list *ret = (t_linked_list *)linked_list;

    while (ret && ret->prev != NULL)
        ret = ret->prev;
    return ret;
}