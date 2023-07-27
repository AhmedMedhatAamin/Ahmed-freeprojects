#include <stdio.h>
#include <stdlib.h>

/*
 *  * create a data struct with link list
 *  * divide in two thing data and link
 *  * store the address to can be accsess the second node
 */
struct node {
    int data;
    struct node *link;
};

int main () {
        struct node *head = NULL;
        head =malloc(sizeof(struct node));

        head->data = 45;
        head->link = NULL;

       printf("%d", head->data);
       return 0;
}
