#include <stdio.h>

int main()
{
    //Float เก็บทศนิยมได้ 6 ตำแหน่ง
    //Double เก็บทศนิยมได้ 15 ตำแหน่ง
    double a = 3.1234567;
    double b = 3.1234568;
    printf("f1x2 => %.8f\n",2.0*a);
    printf("f2x2 => %.8f",2.0*b);
    return 0;
}
