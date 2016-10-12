#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_

#include <stdint.h>

typedef struct node_struct
{
    uint32_t id;
    uint32_t data;
    struct node_struct *next;
    struct node_struct *previous;
} node_t;



#endif