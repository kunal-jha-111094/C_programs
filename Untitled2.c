#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int C_F(int temp);

int main()
{

int temp;
scanf("%d",&temp);
C_F(temp);


}
int C_F(int temp)
{
float tempc;
tempc=temp*9/5+32;
printf("%f",tempc);



}
