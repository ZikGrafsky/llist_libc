//////////////////////////////////////////////
// Created by GrafskyZik on 12/14/22.////////
////////////////////////////////////////////
#include "llist_libc.h"

void llist_clean(t_linked_list *head){
    while (head){
        t_linked_list *tmp = head;
        head = head->next;
        llist_delete_node(tmp);
    }
}