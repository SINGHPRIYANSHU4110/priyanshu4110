#include <iostream>
#include <string>

int main() {
    std::cout << "$ ";  // print the prompt
    std::string input;
    std::getline(std::cin, input);  // wait for user input
    return 0;
}
