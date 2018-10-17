#include <stdio.h>

struct position
{
    int x;
    int y;
    //or int x , y;
};

int main()
{
    struct position pos;
    pos.x = 4;
    pos.y = 8;
}
