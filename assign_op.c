#include "header_assing.h"

array* initialise_array()
{
    array *my_arr;
    my_arr = (array *)malloc(sizeof(array));
    my_arr.c_size=0;
    my_arr.t_size=10;

    return my_arr;
}
stud * insert_data(array *my_arr,stud data )

{
   if(my_arr->c_size==NULL && my_arr->t_size==NULL)return 0;

     *(my_arr->arr + my_arr->c_size) = data;
     my_arr->c_size++;

     return my_arr;
    }
