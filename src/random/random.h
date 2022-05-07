#include <random>
#include <memory>
class randomize
{
private:
    // random seed by default
    std::shared_ptr<std::mt19937>                           _gen;
    std::shared_ptr<std::uniform_int_distribution<size_t>>  _dist;

public:
    size_t get_random(size_t min, size_t max, unsigned int seed = std::random_device{}());
};