#include <stdio.h>

int main()
{
    //if assign integer variable with string it will convert that string value to ascii.
    int a = 'A';
    printf("%d",a);
    //output is 65 -> ascii code of 'A'.

    printf("\n");

    //people / day will give result as int because we assign this as int.
    //so we should convert by parenthesis float before people / day to convert people and day fron integer to float.
    int people = 30;
    int day = 7;
    float rate = (float)people / day;
    printf("Rate is %.2f",rate);
    return 0;
}
