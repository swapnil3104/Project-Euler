#include <iostream>

int main() {
    const int limit = 4000000;
    int a = 1;
    int b = 2;
    int sum = 0;

    while (a <= limit) {
        if (a % 2 == 0) {
            sum += a;
        }
        int next = a + b;
        a = b;
        b = next;
    }

    std::cout << "The sum of the even-valued terms in the Fibonacci sequence not exceeding four million is: " << sum << std::endl;

    return 0;
}