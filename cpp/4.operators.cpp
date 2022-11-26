#include <iostream>

void main() {
    int a = 0;
    int b = 0;
    std::cin >> a >> b;
    std::cout << "Sum: " << (a + b) << std::endl;
    std::cout << "Difference: " << (a - b) << std::endl;
    std::cout << "Product: " << (a * b) << std::endl;
    std::cout << "Quotient: " << (a / b) << std::endl;
    std::cout << "Remainder: " << (a % b) << std::endl;
}