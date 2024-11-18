#include "timers.h"

void print()
{
    printf("Hello World!\n");
}

int main(void)
{
    Timer obj = TCreate(0.5, 4, print);

    printf("Goodbye World!\n");
}