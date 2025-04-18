#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::string;
using std::ofstream;

int main(){
    ofstream outputFile("testCaseP2.txt", std::ios::app);
    //Create a password to be used for guessing purposes
    string secPass = "Mechanical-or-Software-Engineering-1";
    //Prompt user for password
    cout << "\nPlease enter the password: ";
    string userPass;
    cin >> userPass;
    outputFile << userPass << "\n";
    //Use a while loop to check for correct password
    while (secPass != userPass){
        cout << "\nPlease try again: ";
        cin >> userPass;
        outputFile << userPass;
        outputFile << "\n";
    }
    //output a welcome message
    cout << "\nWelcome to indecision!\n";

    
}