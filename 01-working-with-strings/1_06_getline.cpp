// What does the following program do if, when it asks you for input, 
// you type two names (for example, Samual Beckett)? 
// Answer: two names are saved in the input stream, but separately - 
// because cin reads until a whitespace.

// If you want to include whitespaces in cin and get one string from input,
// you can use std::getline(std::cin, variable):

#include <iostream>
#include <string>

int main() {
    std::cout << "What is your name? ";
    std::string name;
    std::getline(std::cin, name);

    std::cout << "Hello, " << name
              << std::endl << "And what is yours? ";
              
    std::getline(std::cin, name);
    std::cout << "Hello, " << name
              << "; nice to meet you too!" << std::endl;

    return 0;
}

/* Old version:
int main() {
    std::cout << "What is your name? ";
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name
              << std::endl << "And what is yours? ";
    std::cin >> name;
    std::cout << "Hello, " << name
              << "; nice to meet you too!" << std::endl;

    return 0;
}
*/