#include <iostream>

int main(){

    //variable for saving the users number
    int userNum;
    //prompt user for a whole number and save it to userNum
    std::cout << "\nPlease enter a whole number: ";
    std::cin >> userNum;
    //If else statement that determines if the number is odd or even by dividing the number by 2 and determining if the number has a remainder
    if(userNum % 2 == 0){
        std::cout << "\nYour number is even!\n";
    } 
    else{
        std::cout << "\nYour number is odd!\n";
    }
    
    std::cout << "\n";
    return 0;
}