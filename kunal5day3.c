#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int factorial( int );

int main()
{

printf("%d",factorial(4));
return 0;

}
int factorial( int N){
    if(N==1)
        return 1;
    else
        return N*factorial(N-1);
}
