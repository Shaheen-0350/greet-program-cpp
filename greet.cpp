#include <iostream>

int main() {
    std::string name;
    std::cout << "What's your first name: ";
    std::cin >> name;

    std::cout << "Hello " << name << "!\n"; 

    return 0;
}