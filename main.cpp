#include <array>
#include <iostream>
#include <limits>
#include <span>

int buildNr = 1;

int main()
{
    std::cout << "NShell" << '\n';
    std::cout << "Build: " << buildNr << '\n';
    std::cout << "Early prototype! Don't expect it to be useful." << '\n';

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}
