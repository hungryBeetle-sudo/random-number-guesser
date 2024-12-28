#include <chrono>
#include <random>
#include <functional>

//Random Number Generator
int rng(){
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);
    std::uniform_int_distribution<int> distribution(1, 100);

    return distribution(generator);
}

int main(){
    return 0;
}