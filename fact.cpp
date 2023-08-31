#include <iostream>

unsigned long long factorialIterative(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    std::cout << "Bir sayi girin: ";
    std::cin >> num;
    
    if (num < 0)
        std::cout << "Negatif sayilar icin faktoriyel hesaplanamaz." << std::endl;
    else
        std::cout << num << "! = " << factorialIterative(num) << std::endl;
    
    return 0;
}

