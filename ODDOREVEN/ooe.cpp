#include <iostream>

int main(){

    //variable for saving the users number
    int userNum;
    //prompt user for a whole number and save it to userNum
    std::cout << "\nEnter a whole number: ";
    std::cin >> userNum;
    //If else statement that determines if the number is odd or even by dividing the number by 2 and determining if the number has a remainder
    if(userNum % 2 == 0){
        std::cout << userNum << " is a even number.\n";
    } 
    else{
        std::cout << userNum << " is a odd number.\n";
    }
    
    std::cout << "\n";
    return 0;
}