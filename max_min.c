#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

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



int main()
{

    int arr[SIZE]={3,5,4,9,10,1,7,6,2,8};
    int *max;
    int *min;
    min_max_element(arr,SIZE,max,min);
    printf("*max=%d,*min=%d",*max,*min);
    return 0;



    }
