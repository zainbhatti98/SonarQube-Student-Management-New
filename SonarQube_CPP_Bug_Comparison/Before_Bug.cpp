#include <iostream>

int main() {
    int* number = nullptr;

    // BUG: Dereferencing a null pointer can crash the program.
    std::cout << "Number: " << *number << '\n';

    return 0;
}
