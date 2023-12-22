#include <iostream>

int main()
{
    char op;
    double num1;
    double num2;
    double result;
    std::string message;
    std::cout << "Hey this is calculator..."
              << "\n";
    std::cout << "Enter either (+ - * /) : ";
    std::cin >> op;
    std::cout << "Enter first number! "
              << "\n";
    std::cin >> num1;
    std::cout << "Enter Second number!"
              << "\n";
    std::cin >> num2;
    switch (op)
    {
    case '+':
        message = "The result of ";
        result = num1 + num2;
        break;
    case '-':
        message = "The result of ";
        result = num1 - num2;
        break;
    case '*':
        message = "The result of ";
        result = num1 * num2;
        break;
    case '/':
        message = "The result of ";
        result = num1 / num2;
        break;
    default:
        message = "Invalid operator.. Please try again.";
    }
    std::cout << message << num1 << op << num2 << " " << result << "\n";
}