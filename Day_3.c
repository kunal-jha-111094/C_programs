#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<math.h>

int left_shift(int );
void char_int(char);
int randadd();
void palindrome(int );
int sum_series(int );



int main()
{
/*
printf("%d", left_shift(3));
char_int('2');
printf("%d",randadd());
palindrome(1221);*/
printf("sum of series %d",sum_series(5));
return 0;

}

int left_shift(int N)
{
    return 1<< N;


}

void char_int(char num)
{

    if(num>'0'&&num<'9')
        printf("it is an integer");
    else
        printf("\nit is a character");
}
int randadd()
{
    int x=rand(),y=rand();
    return x+y;
}
void palindrome(int num)
{

    int sum=0,r = 0,n= num;
        while(n>0)
        {
            r = n%10;
            sum=sum*10+r;
            printf("%d \n", sum);
            n=n/10;
        }

        if(sum==num)
            printf("Palin") ;
        else
            printf("No palin");


}
int sum_series(int N)
{

    int sum=0,num=0;

    while(N>0)
    {
        num=(num*10)+1;
        sum=sum+num;
        N--;
    }
    return sum;
}
