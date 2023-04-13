#include <iostream>
#include <limits>

int buildNr = 3;

int main()
{
    std::cout << "NShell" << '\n';
    std::cout << "Build: " << buildNr << '\n';
    std::cout << "Early prototype! Don't expect it to be useful.\n" << '\n';

    while (true) {
        std::cout << "NShell > ";
        std::string command_to_run;
        std::cin >> command_to_run;

        if (command_to_run == "version") {
            std::cout << "NShell Build " << buildNr << '\n';
        }

        else if (command_to_run == "exit") {
            std::cout << "Goodbye. Please press Enter to exit the application." << '\n';
            break;
        }

        else {
            std::cout << "Unknown command!\n";
        }
    }

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}
