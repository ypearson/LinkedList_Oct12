#include <stdio.h>
#include <stdint.h>

#include "linkedlist.h"

void test1(void)
{
    int i;
    uint32_t size;
    uint32_t data;
    uint8_t found;

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

    if(ll_size(&head_ref, &size) < 0)
    {
        printf("%s\n", "ll_size error");
    }
    printf("Linked List Size = %lu\n", (long unsigned int) size );

    if(ll_remove_from_back (& head_ref, & data) < 0)
    {
        printf("%s\n", "ll_remove_from_back error");
    }
    printf("data from the back = %lu\n", (long unsigned int) data );
    ll_print (& head_ref);


    if(ll_remove_from_front (& head_ref, & data) < 0)
    {
        printf("%s\n", "ll_remove_from_front error");
    }
    printf("data from the front = %lu\n", (long unsigned int) data );
    ll_print (& head_ref);


    if(ll_remove_by_value  (& head_ref, 50, &found ) < 0)
    {
        printf("%s\n", "ll_remove_by_value error");
    }
    printf("Found = %u\n", found );
    ll_print (& head_ref);

    if(ll_remove_by_value  (& head_ref, 12, &found ) < 0)
    {
        printf("%s\n", "ll_remove_by_value error");
    }
    printf("Found = %u\n", found );
    ll_print (& head_ref);

    if(ll_remove_by_value  (& head_ref, 150, &found ) < 0)
    {
        printf("%s\n", "ll_remove_by_value error");
    }
    printf("Found = %u\n", found );
    ll_print (& head_ref);

}

int main(int argc, char **argv)
{

    test1();

    printf("%s\n", "done!");
    return 0;

}
