#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_

#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>


typedef struct node_s
{
    uint32_t       data;
    struct node_s *next;
    struct node_s *previous;
} node_t;

typedef node_t head_t;

typedef struct
{
    uint32_t size;
    head_t *head;
} linked_list_t;


int ll_init       (head_t ** ref, uint32_t data);
int ll_size       (head_t ** ref, uint32_t data);
int ll_add_to_back(head_t ** ref, uint32_t data);
int ll_print      (head_t ** ref);



/*

init
size
add to back
add to front
remove from back
remove from front
destroy
*/

#endif