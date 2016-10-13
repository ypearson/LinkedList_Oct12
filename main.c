#include <stdio.h>
#include <stdint.h>

#include "linkedlist.h"

int main(int argc, char **argv)
{

    int i;
    uint32_t size;

    node_t *head_ref = NULL;

    if(ll_init(& head_ref, 0) < 0)
    {
        printf("%s\n","ll_init error" );
    }

    for(i = 1; i <= 16; i++)
    {
        ll_print (& head_ref);

        if(ll_add_to_back(& head_ref, 10*i) < 0)
        {
            printf("%s\n","ll_add_to_back() error" );
        }
    }
    if(ll_size(&head_ref, &size) < 0)
    {
        printf("%s\n", "ll_size error");
    }
    printf("Linked List Size = %lu\n", (long unsigned int) size );

    for(i = 1; i <= 5; i++)
    {
        if(ll_add_to_front(& head_ref, 3*i) < 0)
        {
            printf("%s\n","ll_add_to_front() error" );
        }
        ll_print (& head_ref);
    }

    printf("%s\n", "done!");
    return 0;

}
