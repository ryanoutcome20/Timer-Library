#include "timers.h"

// Basic Operations

Timer TCreate(float delay, int iterations, void (*callback)(void))
{
    Timer New = {
        .object = callback,
        .iterations = iterations,
        .delay = delay * CLOCKS_PER_SEC,

        .start_time = 0
    };

    // This isn't a perfect solution since it'll take up a single CPU thread while we wait
    // but its the best solution I could find that worked on all architectures and operating
    // systems.

    int time = 0;

    for(int i = 0; i < New.iterations; i++) {
        New.start_time = clock();
        
        do {
            time = clock();
        } while(New.start_time + New.delay > time);

        callback();
    }

    // You'll only need this if you choose to restart the timer.
    return New;
}

Timer TSimple(float delay, void (*callback)(void))
{
    return TCreate(delay, 1, callback);
}

// Utility Operations

Timer TRestart(Timer object)
{
    return TCreate(object.delay / CLOCKS_PER_SEC, object.iterations, object.object);
}