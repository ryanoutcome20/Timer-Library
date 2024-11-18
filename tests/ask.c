#include <stdlib.h>
#include <string.h>
#include "timers.h"

char* word;

void print( )
{
    printf("%s\n", word);
}

int main(int argc, char* argv[])
{
    if(argc < 4)
    {
        printf("Format is [delay, amount, word]!\n");
        return 1;
    }

    // Convert strings to numbers.
    float delay = atof(argv[1]);
    int amount = atoi(argv[2]);

    // Calculate size of the word (so we can memory allocate).
    size_t total_length = 0;
    for (int i = 3; i < argc; i++) {
        total_length += strlen(argv[i]) + 1;
    }

    // Allocate memory.
    char* tmp = malloc(total_length);

    // Handle porting the string over.
    tmp[0] = '\0';
    for (int i = 3; i < argc; i++) {
        strcat(tmp, argv[i]);
       
        if (i < argc - 1) { 
            strcat(tmp, " ");
        }
    }

    word = tmp;

    // Call our timer.
    TCreate(delay, amount, print);
}