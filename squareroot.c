#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lower,upper,num;
    float sqrt;
    printf("Square Root Of : ");
    scanf("%f",&num);
    lower = 0;
    upper = num;
    sqrt = (lower+upper)/2.0;
    while(fabs((sqrt*sqrt)-num) > 0.000001)
    {
        if((sqrt*sqrt)>num)
        {
            upper = sqrt;
        }
        else if((sqrt*sqrt)<num)
        {
            lower = sqrt;
        }
        sqrt = (lower+upper)/2.0;
    }
    printf("Result is %.3f",sqrt);
    return 0;
}
