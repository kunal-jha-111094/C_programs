#include <stdio.h>
#include <stdlib.h>

struct _node_
{
   int data;
  struct node *ptr;
};

typedef struct _node_ node;

struct _list_
{

    node head;
    node tail;
    int count;
};
typedef struct _list_ list;

list *initialise_list();
node *getnode(int);
