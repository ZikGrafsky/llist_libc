//////////////////////////////////////////////
// Created by GrafskyZik on 12/14/22.////////
////////////////////////////////////////////

#ifndef LLIST_LIBC_H
#define LLIST_LIBC_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct s_linked_list{
    void *data;
    struct s_linked_list *prev;
    struct s_linked_list *next;
} t_linked_list;

t_linked_list   *llist_get_last(t_linked_list *llist);
t_linked_list   *llist_get_first(const t_linked_list *linked_list);
int             llist_length(const t_linked_list *linked_list);
t_linked_list   *llist_new(void *data);
void            llist_push_back(t_linked_list *list, t_linked_list *new);
void            llist_delete_node(t_linked_list *element);
int             llist_replace(t_linked_list **old_element, t_linked_list *new_element);
void            llist_clean(t_linked_list *head);

#endif
