// Write a program to generate the product of the numbers in the range [1, 10).

#include <iostream>

int main() {

    int product = 1;
    int i = 1;
    while (i != 10) {
        product *= i;
        ++i;
    }
    std::cout << product << std::endl;
    return 0;
}

