#include <stdio.h>

int main()
{
    int i,j,num;
    printf("Multi Table from number : ");
    scanf("%d",&num);
    for(i = 1;i <= num ;i++)
    {
        for(j = 1;j <= num;j++)
        {
            printf("%d x %d = %d\n",i,j,i*j);
        }
        printf("------------\n");
    }
    return 0;
}
