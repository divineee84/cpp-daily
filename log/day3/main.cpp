#include <iostream>
#include <string>

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    std::cout << "Sum: " << a + b << '\n';
    std::cout << "Difference: " << a - b << '\n';
    std::cout << "Product: " << a * b << '\n';
    std::cout << "Quotient: " << a / b << '\n';
    std::cout << "Remainder: " << a % b << '\n';

    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello, " << name << "!" << '\n';

    return 0;
}
