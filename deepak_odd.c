#include <stdio.h>


#include <stdlib.h>
#include <math.h>
// #include "Prime_number.h"


void prime_number(int num);

int main()

{
    int num;
    scanf("%d", &num);

    prime_number(num);


    return 0;
}

void prime_number(int num){
    if (num%2 == 0) {
        printf("%d is an even number", num);
    }
    else
    {
        printf("%d is an odd number", num);
    }
}
