//////////////////////////////////////////////
// Created by GrafskyZik on 12/14/22.////////
////////////////////////////////////////////
#include "llist_libc.h"

int llistlen(const t_linked_list *linked_list){
    int ret = linked_list ? 1 : 0;

    if (linked_list) {
        t_linked_list *iterator = llist_get_first(linked_list);
        while ((iterator = iterator->next) != NULL)
            ret++;
    }
    return ret;
}