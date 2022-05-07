#include "timer.h"

void timer::delay_sec(int time)
{
    std::this_thread::sleep_for(std::chrono::seconds(time));
}

void timer::delay_milisec(int time)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(time));
}