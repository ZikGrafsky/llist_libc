//////////////////////////////////////////////
// Created by GrafskyZik on 12/14/22.////////
////////////////////////////////////////////
#include "llist_libc.h"

int llist_replace(t_linked_list **old_element, t_linked_list *new_element){
    int ret_code = 1;
    if (*old_element && new_element){
        ret_code = 0;
        if ((*old_element)->data)
            free((void*)(*old_element)->data);
        (*old_element)->data = new_element->data;
    }
    return ret_code;
}