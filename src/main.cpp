#include <iostream>
#include <string>

int main() {
    std::cout << std::unitbuf;  // Ensure immediate flushing of output
    std::cerr << std::unitbuf;  // Ensure immediate flushing of error output
    
    // std::cout << "$ ";  // This line is commented out
    std::cout << "$ ";  // This line remains active
    
    std::string input;
    std::getline(std::cin, input); 
    
    std::cout << "You entered: " << input << std::endl;
// Wait for user input
    
    return 0;
}
