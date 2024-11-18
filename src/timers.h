#include <stdio.h>
#include <time.h>

typedef struct {
    // Object that will be called when the timer completes. Used for restarting.
    void* object;

    // Time when the timer was started or continued.
    clock_t start_time;

    // Delay between iterations.
    float delay;

    // Iterations that we should call the object.
    int iterations;
} Timer;

// Basic Operations

/**
 * TCreate - Creates a timer based on provided settings.
 *
 * @delay: The delay (in seconds) of the timer between each call.
 *   
 * @iterations: The iterations (times to call) of the timer.
 *   
 * @callback: The function you want called.
 *
 * @return: A Timer object that can be passed to TRestart or similar.
 */
Timer TCreate(float delay, int iterations, void (*callback)(void));

/**
 * TSimple - Creates a simple one use timer. Can be restarted later by TRestart.
 *
 * @delay: The delay (in seconds) of the timer before its called.
 * 
 * @callback: The function you want called.
 *
 * @return: A Timer object that can be passed to TRestart or similar.
 */
Timer TSimple(float delay, void (*callback)(void));

// Utility Operations

/**
 * TRestart - Utility wrapper that can be used to restart finished timers.
 *
 * @object: The timer object that you want restarted.
 *
 * @return: The timer object you provided.
 */
Timer TRestart(Timer object);