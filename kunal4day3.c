#include<stdio.h>
#include<stdlib.h>
#include<math.h>



int main()
{


   int N =0,num,sum;
        while(N<100)
        {
            int k=N;
                sum=k%10+k/10;


            if(sum == 9)
                printf("%d\n",N);

                N++;
        }

/*
int i,sum;
        for(i=0;i<=9;i++){
            sum = i*10 + (9-i);
            printf("%d\n",sum);
                }

*/
return 0;
}


