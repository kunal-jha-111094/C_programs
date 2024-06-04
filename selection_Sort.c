#include<stdlib.h>
#include<stdio.h>

int main()
{
    int i,j,temp,k,min;
    int arr[10]={2,3,1,5,4,6,5,8,9,7};

        for(i = 0; i<10;i++){
            min=i;
        for(j=i;j<10;j++){
             if(arr[min]>arr[j])
                min=j;
        }
         temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;

}
for(k=0;k<10;k++)
            printf("%d \n",arr[k]);
}
