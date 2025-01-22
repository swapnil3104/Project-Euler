#include <iostream>


int main() {
    int limit = 1000;
    int sum = 0;

    for (int i = 0; i < limit; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }

    std::cout << "The sum of all multiples of 3 or 5 below " << limit << " is: " << sum << std::endl;

    return 0;
}