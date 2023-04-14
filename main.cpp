#include <iostream>

int buildNr = 4;

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
            std::cout << "NShell\n" << "Build " << buildNr << '\n';
        }
        
        else if (command_to_run == "c.version") {
            std::cout << "NShell Build " << buildNr << '\n';
        }

        else if (command_to_run == "exit") {
            break;
        }

        else {
            std::cout << "Unknown command!\n";
        }
    }

    return 0;
}
