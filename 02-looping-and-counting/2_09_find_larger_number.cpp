// Write a program that asks the user to enter two numbers 
// and tells the user which number is larger than the other.

#include <iostream>

int main() {
    int num1;
    int num2;
    std::cout << "Please, enter two numbers." << std::endl;
    std::cin >> num1;
    std::cin >> num2;
    std::cout << "Your first number is: " << num1 << std::endl;
    std::cout << "Your second number is: " << num2 << std::endl;

    if (num1 > num2) {
        std::cout << "The first number is larger than the second." << std::endl;
    } else {
        std::cout << "The second number is larger than the first." << std::endl;
    }
    return 0;
}
