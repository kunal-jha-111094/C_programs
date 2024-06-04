#include<stdlib.h>
#include<stdio.h>
#include<assert.h>

#define FOUND 1
#define NOTFOUND 0

struct _NODE
{
    int data;
    struct _NODE *ptr;
};
typedef struct _NODE node;

struct list
{

    node *head,*tail;
    int count;
};
typedef struct list list;

list* initialise_list();
node* insert_node(list* ,int);
int search_node(list*,int);
node* sort_node(list*);
list * split_list(list* ,int);


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
      new_node->ptr = my_list->head;
    my_list->head = new_node;

    }
    else
    {
        my_list->head = my_list->tail = new_node;
    }
    my_list->count++;
    return new_node;


}

int search_node(list* my_list,int ele)
{
    node* new_node;



for(new_node  = my_list->head; new_node->ptr != NULL ;  new_node = new_node->ptr)
    if(new_node->data == ele)
        return FOUND;


    else
       return NOTFOUND;



}
list * split_list(list* my_list,int index)
{
    list * my_list2;
   node *temp;
   int i;

        my_list2 = initialise_list();


        for(i = 1,temp = my_list->head ; i< index && temp!= NULL; temp = temp->ptr , i++)
        {
            my_list2->head = temp->ptr;
            my_list2->tail = my_list->tail;
            my_list2-> count = my_list2->count - index;

            my_list->tail = temp;
            my_list->tail->ptr = NULL;
            my_list->count = index;


        }
           return my_list2;
   }





int main()
{

    list *test_list , *new_list;
    node* list_node;
    node *temp;

   test_list = initialise_list();

   list_node = insert_node(test_list , 15);
   list_node = insert_node(test_list , 20);
   list_node = insert_node(test_list , 10);
   list_node = insert_node(test_list , 1);
   list_node = insert_node(test_list , 3);
   list_node = insert_node(test_list , 40);
   list_node = insert_node(test_list , 33);

    assert(test_list->count = 7);



    new_list = split_list(test_list, 4);
        temp = new_list->head;
         while(temp != NULL)
    {
        printf("new_list = %d", temp->data);
        temp = temp->ptr;
    }
    //assert(new_list->head->data == 3);






    assert(search_node(test_list,5) == 0);






}
