#include <iostream>
#include "stages.h"
#include <ctime>
#include <thread>
#include <chrono>



void delay_1sec() // zaderzhka po vremeni 1 sec
{
    std::this_thread::sleep_for(std::chrono::nanoseconds(1000000000));
};

int random_number() // random 1-100
{
    srand(time(NULL));
    delay_1sec(); // v randome ispolzuetsya zaderzhka t.k. on zavisit ot secundy
    return rand()%100 + 1; 
};

int random_52() // random 1-52
{
    srand(time(NULL));
    delay_1sec();
    return rand()%52 + 1;
};

void player_hand::take_cards()
{

};
