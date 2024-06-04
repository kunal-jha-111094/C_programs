#include<stdio.h>
#include<stdlib.h>
void pattern(int );
void pattern_2(int );
int main()
{
  /* pattern(10);*/
   pattern_2(10);


   return 0;






}

void pattern(int N)
{
    int i,j,k;

    for(i=0;i<N;i++)
    {
        for(j=0;j<i;j++)
            printf(" ");

        for(k=N-i;k>0;k--)
            printf("*");
        printf("\n");
    }
}
void pattern_2(int N)
{
    int i,j,k;

        for(i=0;i<N;i++){

            for(j=0;j<=i;j++)
            printf("* ");
            printf(" \n");
        }
{


}
}

