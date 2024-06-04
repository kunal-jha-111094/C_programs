#include "8023header.h"

list* initialise_list()
{
    list * my_list;
    my_list = (list*)malloc(sizeof(list));
    my_list->head = NULL;
    my_list->tail = NULL;
    my_list->count = 0;


}
node* getnode(int data)
{
    node * new_node;
    new_node = (node*)malloc(sizeof(node));

    new_node->data = data;
    new_node->ptr = NULL;

    return new_node;
}
node* insert_node(list* my_list,int data)
{
    node *new_node;

    new_node = getnode(data);
    if(my_list->count != 0){
    my_list->head = new_node;
    new_node->ptr = my_list->head;
    }
    return new_node;
}
