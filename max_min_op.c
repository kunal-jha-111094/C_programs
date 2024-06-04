#include "header2.h"
void min_max_element(int arr[],int size,int *a,int *b)
{

    int temp,j;

    for(int i=0;i<size;i++){
    for( j=1;j<size-1;j++){

        if(arr[i] > arr[j])
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
    }
    }
    *a = arr[0];
    *b = arr[size];

}
