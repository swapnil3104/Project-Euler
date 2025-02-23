#include <iostream>  
#include <algorithm>  

bool isPalindrome(int number) {  
    std::string strNumber = std::to_string(number);  
    std::string reversedStr = strNumber;  
    std::reverse(reversedStr.begin(), reversedStr.end());  
    return strNumber == reversedStr;  
}  

int main() {  
    int largestPalindrome = 0;  

    // Loop through all products of two 3-digit numbers  
    for (int i = 100; i <= 999; i++) {  
        for (int j = 100; j <= 999; j++) {  
            int product = i * j;  
            if (isPalindrome(product) && product > largestPalindrome) {  
                largestPalindrome = product;  
            }  
        }  
    }  

    std::cout << "The largest palindrome made from the product of two 3-digit numbers is " << largestPalindrome << std::endl;  
    return 0;  
}