#include <iostream>

int main() {

    double a, b;
    std::cout << "Enter a value for a: ";
    std::cin >> a; 
    std::cout << "Enter a value for b: ";
    std::cin >> b;

    if (a > 0 && b > 0)
    {
        if (a > b)
        {
            double product = a * b;
            std::cout << "The Product of a & b is: " << product << std::endl;
        }

        else {
            double sum = a + b;
            std::cout << "The Sum of a & b is: " << sum << std::endl; 
        }
    }

    else {
        std::cerr << "A and B must be numbers bigger than zero !";
    }

    return 0;
}