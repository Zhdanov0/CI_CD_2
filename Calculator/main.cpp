#include <iostream>
#include "calculator.h"




int main() {
    double a = 0;
    double b = 0;
    
    Operations operations;


    while (1) {
        std::cout << "Enter first number: ";
        std::cin >> a;
        std::cout << "Enter second number: ";
        std::cin >> b;
        std::cout << "Enter operation (+,-,*,/, ): \n\n";


        std::cout << "a + b: " << operations.add(a, b) << "\n\n";

        std::cout << "a - b: " << operations.subtract(a, b) << "\n\n";

        std::cout << "a * b: " << operations.multiply(a, b) << "\n\n";

        std::cout << "a / b: " << operations.divide(a, b) << "\n\n";

        //std::cout << "a^b: " << operations.power(a, b) << "\n\n";

    }
    
    return 0;
}