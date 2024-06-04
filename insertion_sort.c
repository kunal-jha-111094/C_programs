#include<stdio.h>
#include<stdlib.h>


int main()
{
int i,j,min,temp,k,key,flag;
int arr[10]={2,3,1,4,6,5,8,9,7,5};

    for(i=1;i<10;i++){
           key =arr[i];
            j=i-1;


    while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];

        j=j-1;
    }
arr[j+1]=key;
    }
    for(k=0;k<10;k++)
            printf("%d \n",arr[k]);
}
