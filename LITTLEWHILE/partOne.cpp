#include <iostream>
#include <cstdlib>


using std::cout;
using std::cin;

int main(){
    //create a random number generator that is 1 to 10 inclusive
    srand(time(0));
    int ranNum = (rand()%10) + 1;
    //prompt user to enter a number and save it
    cout << "Please enter a number from 1 to 10 inclusive: ";
    int userNum;
    cin >> userNum;
    cout << "\n";
    //create a while loop that checks if the entered number is the same as the rand num(if not keep going until it is)
    while(userNum != ranNum){
        cout << "Please try again: ";
        cin >> userNum;
        cout << "\n";
    }
    //output if user gets the number correct
    cout << "You guessed correctly! The number was " << ranNum << "!\n";
}