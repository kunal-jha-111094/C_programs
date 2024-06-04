#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

struct _node_
{
    char name[10];
   int stud_id;
   float marks;
  struct node *ptr;
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
   int op_type;
   float time_op;
   char trans_date;
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
trans *intialise_tlist();
tlist *getnode1();
node* insert_student(char*,int,float);
void delete_student( int);
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
     assert(test_arr->count ==0);

     assert(insert_student("kunal",1,74));
    assert(insert_student("rahul",2,58));
    assert(insert_student("tanmay",3,69));
     assert(insert_student("deon",4,56));
     assert(insert_student("akash",5,82));

     assert(test_arr->head->name == "kunal" );
     assert(test_arr->count == 5);


     search_stud(test_arr,1);

     delete_student(5);

     assert(test_arr->count == 4);

      printf("Insert count: %d\n",insert_count);
    printf("Delete count: %d\n",delete_count);

    deallocate(test_arr);

    return 0;




}
list *initialise_list()
{
    list *my_list;
    my_list = (list*)malloc(sizeof(list));
    return my_list;
}
void addLog(char* operation) {
    time_t t;
    struct tm* tmp;
    list *my_list;
    trans* new_log = (trans*)malloc(sizeof(trans));

    strcpy(new_log->op_type, operation);
    time(&t);
    tmp = localtime(&t);
    strftime(new_log->op_type, sizeof(new_log->op_type), "%H:%M:%S", tmp);
    strftime(new_log->trans_date, sizeof(new_log->trans_date), "%Y-%m-%d", tmp);

    new_log->ptr = my_list->head;
   my_list->head = new_log;
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



}

tlist *getnode1( )
{

    tlist *trans_node;
    trans_node = (tlist *)malloc(sizeof(tlist));
    trans_node->head = NULL;
    trans_node->tail = NULL;
    trans_node->count = 0;


}
node* insert_student(char *name,int id,float marks)
{
    node *student;
    int insert_count;
    list *current;
    node * new_node = getnode();




    strcpy(student->name,name);
    student->stud_id = id;
    student->marks = marks;

    student->ptr = current->head;
    current->head = new_node;

     addLog("insert");
     insert_count++;




}
void delete_student(int id)
{
    node *current,*prev;
    list *my_list;
    node *student;int delete_count ;
    current = my_list->head;


    prev=NULL;
   while(current != NULL   && student->stud_id != id){
    prev = current;
    current = current->ptr;
}
    if(current==NULL)
     printf("student not found \n");

    if(prev == NULL)
        student = current->ptr;
    else
        prev->ptr = current->ptr;


    free(current);
    addLog("delete");
    delete_count++;
}
node* search_stud(list *my_list,int id)
{
    node *current;

    current = my_list->head;

    while(current != NULL && current->stud_id != id){
            current = current->ptr;
            if(current == NULL)
                printf("\n student not found");
            else
                printf("student details %d,%s",current->name,current->stud_id);

      return current;

}
}
void deallocate(list *my_list)
{
    node *current;
    node *stud_temp;
    trans *temp;

    while(my_list->head != NULL){
        stud_temp = my_list->head;
        my_list->head = stud_temp->ptr;

        free(stud_temp);
    }
    while(temp != NULL){
        temp = current;
        current = current->ptr;

        free(temp);

}
}





