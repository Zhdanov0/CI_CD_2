#include <iostream>
#include "calculator.h"




int main() {
    int a = 0;
    int b = 0;
    char operation;
    
    Operations operations;


    while (1) {
        std::cout << "Enter first number: ";
        std::cin >> a;
        std::cout << "Enter second number: ";
        std::cin >> b;
        std::cout << "Enter operation (+,-,*,/): ";
        std::cin >> operation;

        switch (op) {
        case '+':
            std::cout << "Reuslt: " << operations.add(a, b) << "\n\n";
            break;
        case '-':
            std::cout << "Reuslt: " << operations.subtract(a, b) << "\n\n";
            break;
        case '*':
            std::cout << "Reuslt: " << operations.multiply(a, b) << "\n\n";
            break;
        case '/':
            std::cout << "Reuslt: " << operations.divide(a, b) << "\n\n";
            break;
        default:
            std::cout << "Invalid operation.\n";
            break;
        }
    }
    
    return 0;
}