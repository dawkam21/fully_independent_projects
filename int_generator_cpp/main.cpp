#include <iostream>
#include <random>
#include <list>

int main() {
    int range;
    int amount;
    std::list<int> queue;

    std::cout << "Pick range of numbers (ex. 100 [0 - 100]): " << std::endl;
    std::cin >> range;

    std::random_device rd;

    std::seed_seq seq {
        rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd()
    };

    std::mt19937 gen(seq);

    std::uniform_int_distribution<int> dist (0, range);

    std::cout << "Pick amount of numbers: " << std::endl;
    std::cin >> amount;

    for (int i = 0; i < amount; i++) {
        queue.push_back(dist(gen)); 
    }
    
    for (int n : queue) {
        std::cout << n << " ";
    }

    return 0;
}