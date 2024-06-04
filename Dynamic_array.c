#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define ARRAYFULL 0
#define SUCCESS 1
#define NOTFOUND -1

#define MAXSIZE 15

struct Dyn_Array_
{
    int *arr[MAXSIZE];
    int c_size,t_size;
};
typedef struct Dyn_Array_ Array;

Array * initialise_array(int );
int insert_data(Array *,int );
int search_element(Array *,int );

int main()
{
    Array *test_array;
    test_array=initialise_array(10);


    test_array=insert_data(test_array,10);
    test_array=insert_data(test_array,20);
    test_array=insert_data(test_array,30);
    test_array=insert_data(test_array,40);
    test_array=insert_data(test_array,50);
    test_array=insert_data(test_array,60);

    for(int i=0;i<MAXSIZE;i++)
    printf("test_array=%d",*(test_array+i));


    assert(search_element(test_array,70)==NOTFOUND);
    return 0;

}

Array * initialise_array(int size)
{
    Array *my_arr;
    my_arr=(Array * )malloc(sizeof(Array));


    my_arr->c_size=0;
    my_arr->t_size= size>0 && size<=MAXSIZE?size : MAXSIZE;
    my_arr = (int*)malloc(sizeof(int)*size);

    return my_arr;
}
int  insert_data(Array * my_arr,int data)
{



    if(my_arr->c_size == my_arr->t_size)
        return ARRAYFULL;




   *( my_arr->arr + my_arr->c_size)=data;
       my_arr->c_size++;

       return SUCCESS;
}
int search_element(Array *my_arr,int element )

{
    for(int i=0;i<my_arr->c_size;i++)
        if(*(my_arr->arr+i) == element)

        printf("element = %d",element);

        else
            return NOTFOUND;


}











