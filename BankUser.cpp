#include <iostream>
#include <limits>
void showBalance(double balance);
double deposit();
double withDraw(double balance);

int main()
{
    double balance = 0;
    int choice = 0;
    do
    {
        std::cout << "Enter your choice"
                  << "\n";
        std::cout << "1-Show Balance"
                  << "\n";
        std::cout << "2-Deposit Money"
                  << "\n";
        std::cout << "3-WithDraw Money"
                  << "\n";
        std::cout << "4-Exit"
                  << "\n";
        if (!(std::cin >> choice))
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter an integer.\n";
            continue;
        }
        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance = balance + deposit();
            showBalance(balance);
            break;
        case 3:
            if (balance < withDraw(balance))
            {
                std::cout << "Sorry you have not too much balance...\n";
                std::cout << "Your current balance is : " << balance << "\n";
            }
            else
            {
                balance = balance - withDraw(balance);
                showBalance(balance);
            }
            break;
        case 4:
            std::cout << "Thanks for visiting...\n";
            break;
        default:
            std::cout << "Sorry!!! invalid choice...\n";
            break;
        }
    } while (choice != 4);
    return 0;
}

void showBalance(double balance)
{
    std::cout << "Your balance is : $ " << balance << std::endl;
    return;
}
double deposit()
{
    double amount = 0;
    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;
    if (amount > 0)
    {
        return amount;
    }
    {
        std::cout << "Please enter a positive number" << std::endl;
        return 0.0;
    }
}
double withDraw(double balance)
{
    double amount = 0;
    std::cout << "Enter amount to be withdraw: ";
    std::cin >> amount;
    if (amount > 0)
    {
        return amount;
    }
    else
    {
        std::cout << "Please enter a positive number" << std::endl;
        return 0.0;
    }
}




// The line std::cin.clear(); is used to clear the error flags of the std::cin stream