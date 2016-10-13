#include "linkedlist.h"

int ll_init(head_t ** ref, uint32_t data)
{
    head_t *head_ref;
    if(*ref)
        return -1;
     *ref = (head_t*) malloc(sizeof(head_t));
     head_ref = *ref;
     head_ref->data = data;
     head_ref->next = NULL;
    return 0;
}

int ll_size (head_t ** ref, uint32_t *size)
{
    uint32_t cnt = 0;
    node_t *ll_ref = *ref;
    if(!ll_ref)
        return -1;
    do
    {
        cnt++;
        ll_ref = ll_ref->next;
    } while(ll_ref);

    *size = --cnt;
    return 0;
}


int ll_add_to_back(head_t ** ref, uint32_t data)
{
    node_t *ll_ref = *ref;
    if(!ll_ref)
        return -1;
    while(ll_ref->next)
    {
        ll_ref = ll_ref->next;
    }
    ll_ref->next = (node_t*)malloc(sizeof(node_t));
    ll_ref = ll_ref->next;
    ll_ref->data = data;
    ll_ref->next = NULL;
    return 0;
}
int ll_print(head_t ** ref)
{
    node_t *ll_ref = *ref;
    if(!ll_ref)
        return -1;
    do
    {
        printf("--->%lu",(unsigned long int)ll_ref->data );
        ll_ref = ll_ref->next;
    } while(ll_ref);
    printf("--->NULL\n");
    return 0;
}
