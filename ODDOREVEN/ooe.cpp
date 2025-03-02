#include <iostream>

int main(){
    int userNum;

    std::cout << "Please enter a whole number: ";
    std::cin >> userNum;

    if(userNum % 0){
        std::cout << "Your number is even!\n";
    } 
    else{
        std::cout << "Your number is odd!\n";
    }
    

    return 0;
}