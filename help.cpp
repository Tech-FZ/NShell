#include "help.h"
#include <iostream>

void help_generic() {
    std::cout << "help      - Shows this, what else do I have to say?\n";
    std::cout << "version   - Shows the NShell build number.\n";
    std::cout << "c.version - Same as version, but in a single line.\n";
    std::cout << "contrib   - Lists all contributors of NShell.\n";
    std::cout << "license   - Shows the license of NShell.\n";
    std::cout << "calc      - A basic calculator included in the NShell.\n";
    std::cout << "exit      - Closes the NShell.\n";
}
