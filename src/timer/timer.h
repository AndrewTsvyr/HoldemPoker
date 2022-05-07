#include <thread>
#include <chrono>

class timer
{
public:
    void delay_sec(int time);
    void delay_milisec(int time); // 1000ml = 1s
};