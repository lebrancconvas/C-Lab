#include <stdio.h>

struct Person
{
    unsigned int mangocount : 4;
};

int main()
{
    struct Person Joy , Jo;
    Joy.mangocount = 12;
    Jo.mangocount = Joy.mangocount + 8;
    printf("Joy has %d mango\n",Joy.mangocount);
    printf("Jo has %d mango\n",Jo.mangocount);
    return 0;
}
