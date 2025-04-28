#include <iostream>
//#include <cmath>

using namespace std;

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

    while(contCalc){
        cout << "\nPlease select an option: ";
        cin >> userChoice;

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
            cout << "\nResult: " << result << "\n";
        } else if(userChoice == 6){
            cout << "\nNothing done, exiting now.\n";
            return 0;
        } else {
            cout << "\nError: Invalid Option. Please Restart.\n";
            continue;
        }
        break;
    }
    while(contCalc){
        cout << "\n-----Operation Menu-----\n";
        cout << "1:Addition\n2:Subtraction\n3:Multiplication\n4:Division\n5:Modulo(Remainder)\n6:Exit\n";
        cout << "\nPlease select an option: ";
        cin >> userChoice;
        
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
        } else if(userChoice == 6){
            contCalc = false;
        } else {
            cout << "\nError: Invalid Option. Please try Again.\n";
            continue;
        }
        cout << "\nResult: " << result << "\n";
    }
    cout << "\nFinal Result: " << result << "\n";
}
