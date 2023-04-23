#include "help.h"
#include "calc.h"
#include <iostream>

int buildNr = 7;

const char *mitLicense =
"MIT License\n\n"

"Copyright (c) 2023 Nicolas Lucien and NShell contributors\n\n"

"Permission is hereby granted, free of charge, to any person obtaining a copy "
"of this software and associated documentation files (the \"Software\"), to deal "
"in the Software without restriction, including without limitation the rights "
"to use, copy, modify, merge, publish, distribute, sublicense, and/or sell "
"copies of the Software, and to permit persons to whom the Software is "
"furnished to do so, subject to the following conditions:\n\n"

"The above copyright notice and this permission notice shall be included in all "
"copies or substantial portions of the Software.\n\n"

"THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR "
"IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, "
"FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE "
"AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER "
"LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, "
"OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE "
"SOFTWARE.\n";

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

        else if (command_to_run == "contrib") {
            std::cout << "Nico Lucien\nErik P" << '\n';
        }

        else if (command_to_run == "c.version") {
            std::cout << "NShell Build " << buildNr << '\n';
        }

        else if (command_to_run == "help") {
            help_generic();
        }

        else if (command_to_run == "calc") {
            calc();
        }

        else if (command_to_run == "license") {
            std::cout << "NShell\n" << "Build " << buildNr << '\n';
            std::cout << "\n";

            std::cout << mitLicense;
        }

        else if (command_to_run == "exit") {
            break;
        }

        else {
            std::cout << "NShell encountered an error: Unknown command!\n";
        }
    }

    return 0;
}
