#include <iostream>  

long long largestPrimeFactor(long long n) {  
    // Initialize the largest prime factor variable  
    long long largestFactor = 1;  

    // Check for number of 2s that divide n  
    while (n % 2 == 0) {  
        largestFactor = 2;  
        n /= 2;  
    }  


    for (long long i = 3; i * i <= n; i += 2) {  
        // While i divides n, update n and set largestFactor to i  
        while (n % i == 0) {  
            largestFactor = i;  
            n /= i;  
        }  
    }  

    // This condition is to check if n is a prime number greater than 2  
    if (n > 2) {  
        largestFactor = n;  
    }  

    return largestFactor;  
}  

int main() {  
    long long number = 600851475143LL;  
    std::cout << "The largest prime factor of " << number << " is " << largestPrimeFactor(number) << std::endl;  
    return 0;  
}