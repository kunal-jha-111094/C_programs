#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define SQUARE(X) X*X
int power(int, int );


int main()
{
    int X=5;
    printf("%d",SQUARE(X));
 /* printf("%d",power(2,9));*/
   return 0;

}

int power(int base, int exp)
{

    if (exp==0)
    return 1;

        else
          return base*power(base,exp-1);

}
