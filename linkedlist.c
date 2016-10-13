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

int ll_add_to_front(head_t ** ref, uint32_t  data)
{
    node_t *node_ref;
    if(!*ref)
        return -1;
    node_ref = (node_t*)malloc(sizeof(node_t));
    node_ref->next = *ref;
    node_ref->data = data;
    *ref = node_ref;
    return 0;
}

int ll_remove_from_back (head_t ** ref, uint32_t *data)
{
    node_t *node_ref = *ref;
    node_t *previous_node_ref = *ref;

    if(!node_ref)
        return -1;

    while(node_ref->next)
    {
        previous_node_ref = node_ref;
        node_ref = node_ref->next;
    }
    previous_node_ref->next = 0;
    *data = node_ref->data;
    free(node_ref);
    return 0;
}

int ll_remove_from_front(head_t ** ref, uint32_t *data)
{
    head_t *head_ref = *ref;

    if(!head_ref)
        return -1;
    *data = head_ref->data;
    *ref = head_ref->next;
    free(head_ref);
}

int ll_remove_by_value  (head_t ** ref, uint32_t *data)
{

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
