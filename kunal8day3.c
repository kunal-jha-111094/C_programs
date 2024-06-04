#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void max_min(int arr[],int* ,int*);


int main()
{
    int x;
    int arr[5]={8,4,9,3,2};
   int m = arr[0];
   int n = arr[0];
    max_min(arr,&m,&n);
    return 0;

}
void max_min(int arr[],int *max,int *min)
{

    int i,j;

        for(i=1;i<5;i++){
            if(*max<arr[i])
                *max=arr[i];
}
printf("%d\n",*max);

        for(j=1;j<5;j++)
        if(*min>arr[j]){
                *min=arr[j];


        }
        printf("%d",*min);
}
