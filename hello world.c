#include <stdio.h>
#define MAXSIZE 15
#define NOTFOUND 0
#include<assert.h>




struct static_array
{
int array[MAXSIZE];
int c_size,t_size;

};

typedef struct static_array Array;

Array initialise_array(int );


Array insert_data(Array arr,int data);
int search_element(Array arr,int element);





Array initialise_array(int size)
{
    Array arr;
    arr.c_size=0;
    arr.t_size= size>0 && size<=MAXSIZE? size:MAXSIZE;

    return arr;
}

Array insert_data(Array arr,int data)
{
    arr.array[arr.c_size]=data;
    arr.c_size++;

    return arr;
}

int search_element(Array arr,int element)
{
    for(int i=0;i<arr.c_size;i++){
        if(arr.array[i]== element)

         printf("element=%d", element);

    }

}
int main()

{

       Array test_array;

       test_array=initialise_array(10);

       test_array= insert_data(test_array,10);
       test_array= insert_data(test_array,20);
       test_array= insert_data(test_array,30);
       test_array= insert_data(test_array,40);
       test_array= insert_data(test_array,50);
for(int i=0;i<test_array.c_size;i++)

        printf("%d\n",test_array.array[i]);


       search_element(test_array,70);
        return 0;
}
