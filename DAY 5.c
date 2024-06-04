#include<stdio.h>
#include<stdlib.h>
// include"header1.h"


int intersection(int *A[],int *B[], int count,int *C[]);


int main()

{
    int A[10]={1,2,3,5,8,9,3,5,4,1};
    int B[10]={1,12,1,7,8,6,5,4,1,2};
    int C[10];
    int count;
   intersection( &A, &B ,count, &C);
}

int intersection(int *A[],int *B[], int count,int *C[])
{
    int i,j;
    count =0;
    for (i=0;i<9;i++)
        for(j=0;j<9;j++)
        if(A[i]=B[j])
            C[10]= C[count];
    else
        count=count+1;



}


