#include "timers.h"

int rep = 0;

void print()
{
    rep++;
    printf("Hello %i\n", rep);
}

int main(void)
{
    Timer obj = TCreate( 1, 1, print );

    obj.iterations = 9;

    TRestart(obj);
}