#include <iostream>
#include <cmath>

int main()
{
    double a;
    double b;
    double c;
    std::cout << "Enter A Value..."
              << "\n";
    std::cin >> a;
    std::cout << "Enter B Value..."
              << "\n";
    std::cin >> b;
    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);
    std::cout << "The Result is..." << c << "\n";
    return 0;
}