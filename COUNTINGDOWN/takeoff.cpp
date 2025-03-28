#include <iostream>

int main(){
    //Ask user for a number, then save the number to be used later
    std::cout << "\nThank you for joining the space program!\nToday we will be launching a rocket and we need your help.\nPlease enter a launch time that is greater than or equal to 1\n";
    std::cout << "\nPlease enter the integer here: ";
    int launchtime;
    std::cin >> launchtime;
    std::cout << "\n";
    //If statement that check if the user entered 0 or anything less than 0
    if(launchtime < 1){
        std::cout << "Error...Error\n \nPlease try again.";
        return 0;
    }
    //Use a for loop that takes the users number and subtracts 1 until the number reaches 1 and outputs the numbers
    for(int x = launchtime; x >= 1; x--){
        std::cout << launchtime << "\n";
        launchtime--;
    }
    //output that states "Blast off!"
    std::cout << "Blast Off!!!";

    return 0;
}