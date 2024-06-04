#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <time.h>

struct _node_
{
    char name[10];
    int stud_id;
    float marks;
    struct _node_ *ptr;
};
typedef struct _node_ node;

struct stud_list_
{
    node *head;
    node *tail;
    int count;
};
typedef struct stud_list_ list;

struct type_op
{
    int op_type[11];
    float time_op[11];
    char trans_date[11];
    struct type_op *ptr;
};
typedef struct type_op trans;

struct trans_list
{
    trans *head;
    trans *tail;
    int count;
};
typedef struct trans_list tlist;

list *initialise_list();
node *getnode();
trans *initialise_tlist();
tlist *getnode1();
node* insert_student(char*,int,float);
void delete_student(int);
node* search_stud(list *,int );
void addLog(char*);
void deallocate(list *);

int insert_count=0;
int delete_count=0;

int main()
{
    list *test_arr;
    test_arr = initialise_list();

    assert(test_arr != NULL);
    assert(test_arr->head == NULL && test_arr->tail == NULL);
    assert(test_arr->count == 0);

    assert(insert_student("kunal", 1, 74));
    assert(insert_student("rahul", 2, 58));
    assert(insert_student("tanmay", 3, 69));
    assert(insert_student("deon", 4, 56));
    assert(insert_student("akash", 5, 82));

    assert((test_arr->head->name, "kunal"));
    assert(test_arr->count == 4);

    search_stud(test_arr, 1);
    delete_student(5);
    assert(test_arr->count == 3);

    printf("Insert count: %d\n", insert_count);
    printf("Delete count: %d\n", delete_count);

    assert(insert_count = 4);
    assert(delete_count = 1);

    deallocate(test_arr);
    return 0;
}

list *initialise_list()
{
    list *my_list;
    my_list = (list*)malloc(sizeof(list));
    my_list->head = NULL;
    my_list->tail = NULL;
    my_list->count = 0;
    return my_list;
}

void addLog(char* operation)
{
    time_t t;
    struct tm* tmp;

    trans* new_log = (trans*)malloc(sizeof(trans));


    time(&t);
    tmp = localtime(&t);
    strftime(new_log->trans_date, sizeof(new_log->trans_date), "%Y-%m-%d", tmp);


}

trans *initialise_tlist()
{
    trans *my_tlist;
    my_tlist = (trans*)malloc(sizeof(trans));
    return my_tlist;
}

node *getnode()
{
    node *new_node;
    new_node = (node *)malloc(sizeof(node));
    return new_node;
}

tlist *getnode1()
{
    tlist *trans_node;
    trans_node = (tlist *)malloc(sizeof(tlist));
    trans_node->head = NULL;
    trans_node->tail = NULL;
    trans_node->count = 0;
    return trans_node;
}

node* insert_student(char *name, int id, float marks)
{   list *my_list;


    node *new_node = getnode();


    strcpy(new_node->name, name);
    new_node->stud_id = id;
    new_node->marks = marks;
    new_node->ptr = new_node;

    if( my_list->count == 0){

    my_list->head = new_node;
    my_list->tail = new_node;
    }
        else
        {new_node = my_list->tail;
    }
    my_list->count++;

    addLog("insert");
    insert_count++;
    return new_node;
}

void delete_student(int id)
{
    node *current, *prev;
    list *my_list;


    current = NULL;
    prev = NULL;
    my_list->head=current;


    while(current->stud_id != id)
    {
        prev = current;
        current = current->ptr;
    }

    if(current == NULL)
        printf("student not found \n");
    else
    /*{
        if(prev == NULL)
        {

        }
        else
        {*/
            prev->ptr = current->ptr;

        free(current);
        addLog("delete");
        delete_count++;
    }


node* search_stud(list *my_list, int id)
{
    node *current = my_list->head;
    while(current != NULL && current->stud_id != id)
    {
        current = current->ptr;
    }
    if(current == NULL)
        printf("\n student not found");
    else
        printf("student details %s,%d", current->name, current->stud_id);
    return current;
}

void deallocate(list *my_list)
{
    node *current = my_list->head;
    node *stud_temp;

    while(current != NULL)
    {
        stud_temp = current;
        current = current->ptr;
        free(stud_temp);
    }
    free(my_list);
}
