#include <stdio.h>
#define PI 3.14

int main()
{
    //Finding Ciecumference and Area of The Circle.
    float r,area,circum;
    printf("Radius of Circle is : ");
    scanf("%f",&r);
    circum = 2*PI*r;
    area = PI*r*r;
    printf("So,\nCircumferance is equal to %.2f\nArea is equal to %.2f",circum,area);
    return 0;
}
