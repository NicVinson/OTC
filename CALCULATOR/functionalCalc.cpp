#include <iostream>

using namespace std;

//Functions for the operations to avoid tediousness and chance of error in coding
int add(int a, int b){
    return a + b;
}
int sub(int a, int b){
    return a - b;
}
int mult(int a, int b){
    return a * b;
}
int divi(int a, int b){
    return a / b;
}
int mod(int a, int b){
    return a % b;
}

int main(){
    bool contCalc = true;
    int userChoice;
    int num1;
    int num2;
    int result;

    cout << "-----Operation Menu-----\n";
    cout << "1:Addition\n2:Subtraction\n3:Multiplication\n4:Division\n5:Modulo(Remainder)\n6:Exit\n";

    //first while loop will take the users input of a operation, and two numbers then check what option was selected
    while(contCalc){
        cout << "\nPlease select an option: ";
        cin >> userChoice;

        //Basic arithmetic operations
        if(userChoice >= 1 && userChoice <= 5){
            cout << "\nPlease enter the first number: ";
            cin >> num1;
            cout << "\nPlease enter the second number: ";
            cin >> num2;

            switch(userChoice){
                case 1:
                    result = add(num1, num2);
                    break;
                case 2:
                    result = sub(num1, num2);
                    break;
                case 3:
                    result = mult(num1, num2);
                    break;
                //for cases 4 and 5 a check is put in place to make sure second number is not zero, if it is an error is thrown
                case 4:
                    if(num2 == 0){
                        cout << "\nError, Divide by Zero!\n";
                        return 0;
                    }
                    result = divi(num1, num2);
                    break;
                case 5:
                    if(num2 == 0){
                        cout << "\nError, Remainder by Zero!\n";
                        return 0;
                    }
                    result = mod(num1, num2);
                    break;
            }
            //for outputting the result after each calculation
            cout << "\nResult: " << result << "\n";
        } 
        //checks for an exit case, due to no other result being saved, if user exits nothing else will be done
        else if(userChoice == 6){
            cout << "\nNothing done, exiting now.\n";
            return 0;
        } 
        //If user puts in an invalid option the continue statement will bring them back to the start of the loop
        else {
            cout << "\nError: Invalid Option. Please Restart.\n";
            continue;
        }
        //due to the exit case not having a numeric output I chose to not set the contCalc bool to false, and included a break to exit the while loop to continue to the next
        break;
    }

    //second while loop for further calculation
    while(contCalc){
        cout << "\n-----Operation Menu-----\n";
        cout << "1:Addition\n2:Subtraction\n3:Multiplication\n4:Division\n5:Modulo(Remainder)\n6:Exit\n";
        cout << "\nPlease select an option: ";
        cin >> userChoice;
        
        //same as while loop one but instead of taking two user inputed numbers, I took the result, then a number to chain together calculations
        if(userChoice >=1 && userChoice <=5){
            cout << "\nPlease enter a number: ";
            cin >> num2;
            switch(userChoice){
                case 1:
                    result = add(result, num2);
                    break;
                case 2:
                    result = sub(result, num2);
                    break;
                case 3:
                    result = mult(result, num2);
                    break;

                //case 4 and 5 have the same standards as in the first while loop
                case 4:
                if(num2 == 0){
                    cout << "\nError, Divide by Zero!\n";
                    return 0;
                }
                    result = divi(result, num2);
                    break;
                case 5:
                    if(num2 == 0){
                        cout << "\nError, Remainder by Zero!\n";
                        return 0;
                    }
                    result = mod(result, num2);
                    break;
            } 
        } 
        //for this exit case since there is a result saved I set cont calc to false stopping the continuation and finishing the code outside the loop.
        else if(userChoice == 6){
            contCalc = false;
        } 
        //Same as while loop 1
        else {
            cout << "\nError: Invalid Option. Please try Again.\n";
            continue;
        }
        cout << "\nResult: " << result << "\n";
    }

    //Outputs the final result for the user once they have exited
    cout << "\nFinal Result: " << result << "\n";
}
