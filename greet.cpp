#include <iostream>

int main() {
    std::string name, response;
    int status=0;
    std::cout << "What's your full name: ";
    std::getline(std::cin, name);

    std::cout << "Hello " << name << "!\n"; 
    do {
        std::cout << "Is the weather good?:(y/n) ";
        std::cin >> response;
        if(response=='y'||response=='Y') {
            std::cout << "That's good!\n";
            status=1;
        }
        else if(response=='n'||response=='N')
            std::cout << "Sorry to hear that.\n";
            status=1;
        else {
            std::cout << "Oops wrong input\n";
            std:: << "Let's do this again.\n";
            std::cout << std::endl;
        }}
    while(status=0);

    return 0;
}
