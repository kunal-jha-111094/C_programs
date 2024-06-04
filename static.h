#include <stdio.h>

#define MAXSIZE 15

struct static_array
{
int array[MAXSIZE];
int c_size,t_size;

};

typedef struct static_array Array;

Array initialise_array(int );


Array insert_data(Array arr,int data);
int search_element(Array arr,int data);
