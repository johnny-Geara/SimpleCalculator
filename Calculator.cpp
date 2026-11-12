#include <iostream>
#include <cmath>
int main() {
int a, b;
std::cout << "Enter two integers: ";
std::cin >> a >> b;
std::cout << "Addition result = " << a + b << std::endl;
std::cout << "Difference = " << a - b << std::endl;
std::cout << "Product = " << a * b << std::endl;
if (b != 0) {
std::cout << "Quotient = " << a / b << std::endl;
} else {
std::cout << "Division by zero is not allowed." << std::endl;
}
std::cout << "Power = " << std::pow(a, b) << std::endl;
return 0;
}