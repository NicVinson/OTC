#include <iostream>

int main(){
    std::string usersName;
    //Prompt the user to enter their name
    std::cout << "Hello, what is your name? ";
    std::cin >> usersName;

    std::cout << usersName;
}