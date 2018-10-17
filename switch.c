#include <stdio.h>

int main()
{
    int num = 2;
    switch(num)
    {
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        default:
            printf("What?");
    }
    return 0;
}
