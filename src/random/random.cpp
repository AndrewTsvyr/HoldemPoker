#include "random.h"

size_t randomize::get_random(size_t min, size_t max, unsigned int seed)
{
    _gen = std::make_shared<std::mt19937>(seed); 
    _dist = std::make_shared<std::uniform_int_distribution<size_t>>(min, max);
    return (*_dist)(*_gen);
}