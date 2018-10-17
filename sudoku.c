#include <stdio.h>

int main()
{
    int i,j;
    printf("+---+---+---+\n");
    for (i = 0;i < 3;i++)
    {
        for(j = 0;j < 3;j++)
        {
            printf("|###|###|###|\n");
        }
        printf("+---+---+---+\n");
    }
    return 0;
}
