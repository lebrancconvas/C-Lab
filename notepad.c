#include <stdio.h>

void main ()
{
    int score;
    printf("Score : ");
    scanf("%d",&score);
    if(score >= 90 && score <= 100)
    {
        printf("Your score is %d , You Pass!!",score);
    }
    else if(score > 100 || score < 0)
    {
        printf("Error!!");
    }
    else
    {
        printf("Your score is %d , You failed!!",score);
    }
}
