// selection sort
#include<stdio.h>
#include<stdlib.h>

int main()
{
int i,j,min,temp,k;
int arr[10]={2,3,1,4,6,5,8,9,7,5};

    for(i=0;i<10;i++){
        min=i;
        for(j=0;j<10;j++){

          if(arr[j+1]<arr[j]){

            temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;



          }


          }


    }
     for(k=0;k<10;k++)
            printf("%d \n",arr[k]);

}
