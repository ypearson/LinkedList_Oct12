#include <stdio.h>
#include <stdint.h>

#include "linkedlist.h"

int main(int argc, char **argv)
{

    int err = 0;
    node_t *head_ref = NULL;

    printf("main: head_ref = %p\n", head_ref);
    printf("main: phead_ref = %p\n", &head_ref);

    if(ll_init(& head_ref, 10) < 0)
    {
        printf("%s\n","ll_init error" );
    }

    ll_print (& head_ref);

    // if(ll_add_to_back(&head_ref, 20) < 0)
    // {
    //     printf("%s\n","ll_add_to_back error" );
    // }
    // ll_add_to_back(&head_ref, 30);
    // ll_add_to_back(&head_ref, 40);



    // ll_print(& head_ref);
    // ll_print(& head_ref);
    // ll_print(& head_ref);
    // ll_print(& head_ref);


    printf("%s\n", "done!");
    return 0;

}
