#include <stdio.h>
#include <stdlib.h>

typedef enum {

    bigg,inter,exp

}course;


struct mem_tech_details
{
    char name[15];
    int age;
    course lvl;
};
typedef struct mem_tech_Details mem;

struct LIST
{
    mem * arr;
    int c_size,t_size;
};

typedef struct LIST list;

list * initialise_details(list*,int);
list * insert_details(list *,mem);
mem* getnode(int );
int deallocate();


mem* getnode(int size)
{
    mem * my_arr;

    my_arr = (mem*)malloc(size*sizeof(mem));


   if(my_arr = NULL){
    printf("memory not allocated");
exit(1);


   }
   return my_arr;
}
list* initialise_details(list * my_list,int size)

{
   my_list = (list*)malloc(sizeof(list));


   my_list->arr = getnode(size);
    my_list->c_size = 0;
    my_list->t_size = size;

   return my_list;



}

list* insert_details(list * my_list, mem data)
{

    if(my_list->c_size >= my_list->t_size) {
        printf("List is full");
        return my_list;
    }

    my_list->arr[my_list->c_size] = data;
    my_list->c_size++;

    return my_list;
}
int main()
{
return 0;

}
