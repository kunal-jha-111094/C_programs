#include <stdio.h>


#include <stdlib.h>
#include <math.h>
// #include "odd_number.h"
# define SIZE 5

float area_circle(float radius);

int odd_number(int num);
int pattern(int N);
void swap_(int *x,int *y);
int occurrence(int num1);
int main()

{
    int num;
    float radius;
    int N;
    int x=10,y=20;
    int num1,arr[SIZE]={1,2,2,3,4};



    printf("%d \n", odd_number(num));
    printf("\n enter radius == ");
     scanf("%f \n",&radius);


    printf("%f Area of circle ==", area_circle(radius));


    scanf("%d", &N);
     pattern(N);
    swap_(&x,&y);
    printf("x=%d,y=%d", x,y);
    scanf("%d",&num1);
    printf( "%d%, occurrence(num1));

    return 0;
}

int odd_number(int num){
    {

    if (num%2==0)
            {
                printf("%d number is even number",num);
            }
else

            printf("%d not a odd number",num);
}

    return num;
}


float area_circle(float radius)

{
    float area;



    area = 3.14*pow(radius,2);
    return area;

}

int pattern(int N)

{
   static int i=5,j=0;
    for( i=5;i>=0;i--){

        for( j=i;j>0;j--)
    {
        printf("*");
    }
    printf("\n");
    }
}
void swap_(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int occurrence( int num1)
{
    int i=0,j,arr[SIZE], count;


    while(i<SIZE-1)
    {

           for(j=i+1;j<=SIZE-2;j++)
             if(arr[i]==arr[j]){
                count=count+1;
               printf("%d",count);
             }
    }




}
