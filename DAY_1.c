#include <stdio.h>


#include <stdlib.h>
#include <math.h>
// #include "odd_number.h"

float area_circle(float radius);

int odd_number(int num);

int main()

{
    int num;
    scanf("%d", &num);

    printf("%d", odd_number(num));
     scanf("%f Radius",&radius);

    printf("%f Area of circle", area_circle(area));


    return 0;
}

int odd_number(int num){
    {

    if (num%2==0)
            {
                printf("%d number is odd number",num);
            }
else

            printf("%d not a odd number",num);
}

    return num;
}


float area_circle(float radius)

{
    float radius;
    float area;



    area = 3.14*radius^2;
    return area;

}
