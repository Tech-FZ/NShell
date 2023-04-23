#include "calc.h"
#include <iostream>

void add(double x, double y)
{
    std::cout << x << " + " << y << " = " << x + y << "\n";
}

void subtract(double x, double y)
{
    std::cout << x << " - " << y << " = " << x - y << "\n";
}

void multiply(double x, double y)
{
    std::cout << x << " * " << y << " = " << x * y << "\n";
}

void divide(double x, double y)
{
    if (y != 0) {
        std::cout << x << " / " << y << " = " << x / y << "\n";
    }

    else {
        std::cout << "NShell encountered an error: Cannot divide by zero.\n";
    }
}

void calc()
{
    std::string confirm;

    while (true) {
        std::cout << "Please type in the first number: ";
        double x{ };
        std::cin >> x;

        std::cout << "Please type in the second number: ";
        double y{ };
        std::cin >> y;

        while (true) {
            std::cout << "Please choose what to do.\n\n";
            std::cout << "1. Add\n";
            std::cout << "2. Subtract\n";
            std::cout << "3. Multiply\n";
            std::cout << "4. Divide\n";
            std::cout << "5. Enter other numbers\n";
            int sel{ };
            std::cin >> sel;

            switch (sel)
            {
            case 1:
                add(x, y);
                break;

            case 2:
                subtract(x, y);
                break;

            case 3:
                multiply(x, y);
                break;

            case 4:
                divide(x, y);
                break;

            case 5:
                break;

            default:
                std::cout << "NShell encountered an error: Please choose a number between 1 and 5.\n";
            }

            std::cout << "Do you want to re-run? (Y/N): ";
            std::cin >> confirm;

            if (confirm == "Y" || confirm == "y" || confirm == "N" || confirm == "n") {
                break;
            }

            else {
                std::cout << "NShell encountered an error: Please type Y or N.\n";
            }
        }

        if (confirm == "N" || confirm == "n") {
            break;
        }

    }

}
