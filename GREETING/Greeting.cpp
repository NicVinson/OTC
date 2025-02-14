#include <iostream>


int main(){
    //String variable made to save the users name
    std::string usersName;
    //Prompt the user to enter their name
    std::cout << "\nHello, what is your name? ";
    std::cin >> usersName;
    //Output a greeting along with the users name
    std::cout << "\nIt's nice to meet you, " << usersName;


    return 0;
}