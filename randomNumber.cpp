#include <iostream>
#include <random>

int main() {
    std::random_device rd;                          // Seed source (non-deterministic)
    std::mt19937 gen(rd());                         // Mersenne Twister generator
    std::uniform_int_distribution<> dist(1, 100);   // Range [1, 100]

    int rand_number = dist(gen);

    std::cout << "Random number: " << rand_number << std::endl;
    return 0;
}
