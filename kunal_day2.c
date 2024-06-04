#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<math.h>
void amicable(int ,int );
void add_sub_mul( );

int main()
{

/*
amicable(1183,1210);
*/
add_sub_mul(3);
return 0;



}
void amicable(int num1,int num2)
{
int sum1=0,sum2=0;
  for(int i=1;i<num1;i++)
       {

        if(num1%i==0)
        sum1=sum1+i;

        }

                for(int j=1;j<num2;j++){
                    if(num2%j==0)
                        sum2=sum2+j;

                }






    if(sum1==num2 && sum2==num1)

        printf("number is amicable \n");

    else

    printf("number is not amicable");



}
void add_sub_mul()
{
     printf("enten two numbers");
                int x,y,N;
                scanf("%d%d",&x,&y);
    printf("choose from 1 to 3");
    scanf("%d",&N);
    switch(N)
    {

        case 1:
                printf("sum of two integers%d\n",x+y);
                break;

        case 2:
                printf("sub of two digits%d\n",x-y);
                 break;



        case 3 :
                printf("mul of two digits%d\n",x*y);
                 break;




    }
}


