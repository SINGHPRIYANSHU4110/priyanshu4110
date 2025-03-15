#include <iostream>
#include <string>
#include <cstdlib> // For system()

int main() {
    std::cout << std::unitbuf;  // Ensure immediate flushing of output
    std::cerr << std::unitbuf;  // Ensure immediate flushing of error output
    
    while (true) { // Keep the shell running
        std::cout << "$ ";  // Display shell-like prompt
        
        std::string input;
        std::getline(std::cin, input);  // Get user command

        if (input == "exit") {  // Allow user to exit
            std::cout << "Exiting shell...\n";
            break;
        }

        int status = system(input.c_str());  // Execute command

        if (status != 0) {
            std::cerr << input << ": command not found" << std::endl;
        }
    }

    return 0;
}
