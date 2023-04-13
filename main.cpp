#include <iostream>
#include <limits>

int buildNr = 2;

int main()
{
    std::cout << "NShell" << '\n';
    std::cout << "Build: " << buildNr << '\n';
    std::cout << "Early prototype! Don't expect it to be useful." << '\n';

    std::cout << "NShell > ";
    std::string command_to_run;
    std::cin >> command_to_run;

    std::cout << "You would have run " << command_to_run << ". Thanks for testing. Goodbye.";

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}
