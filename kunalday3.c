#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<math.h>
void decimal_binary(int);
int binary_decimal(int );

int main()
{
/*
 decimal_binary(10);*/

 printf("%d",binary_decimal(1010));
 return 0;



}
void decimal_binary(int num)
{
    int b_data=1;
    while(num>1)
    {
     b_data=b_data*10+num%2;
     num=num/2;

    }
  printf("binary digit ==%d",b_data);
}
int binary_decimal(int digit)
{
   int sum=0,i=0;

   while(digit>0)
   {
       sum=sum+ pow(2,i)*(digit%10);
       digit=digit/10;
       i++;

   }
return sum;
}
