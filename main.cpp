#include "tools.hpp"
#include <iostream>
#include <string>
int main() {
    std::cout << "enter fibonacci number" << std::endl;
    std::string input;
    int number;
    std::cin >> input;
    try {
        number = std::stoi(input);
        std::cout << "number is: " << fibonacci(number) << std::endl;
    } catch (...) {   
        std::cout << "invalid number" << std::endl;
    }
    
    return 0;
}
