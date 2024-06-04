#include<stdio.h>
#include<stdlib.h>
void remove_duplicate(int arr[]);


int main()
{

int arr[5]={1,5,6,1,1};
remove_duplicate(arr);
return 0;

}

void remove_duplicate(int arr[])
{

    int i,j,k;
        for(i=0;i<5;i++)
        {
        for(j=1;j<4;j++){
            if(arr[i]==arr[j]){
                arr[j]=arr[j+1];
                j--;
                i--;

            }
        }
        for(k=0;k<3;k++)
  printf("%d",arr[k]);
        }


}


