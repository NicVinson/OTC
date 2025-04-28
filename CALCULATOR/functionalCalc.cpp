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

    cout << "\nPlease select an option: ";
    cin >> userChoice;
    cout << "\nPlease enter the first number: ";
    cin >> num1;
    cout << "\nPlease enter the second number: ";
    cin >> num2;

    switch(userChoice){
        case 1:
            result = add(num1, num2);
            cout << "\nResult: " << result << "\n";
            break;
        case 2:
            result = sub(num1, num2);
            cout << "\nResult: " << result << "\n";
            break;
        case 3:
            result = mult(num1, num2);
            cout << "\nResult: " << result << "\n";
            break;
        case 4:
            result = divi(num1, num2);
            cout << "\nResult: " << result << "\n";
            break;
        case 5:
            result = mod(num1, num2);
            cout << "\nResult: " << result << "\n";
            break;
    }
    while(contCalc){
        cout << "\nPlease select an option: ";
        cin >> userChoice;
        
        switch(userChoice){
            case 1:
                cout << "\nPlease enter a number: ";
                cin >> num2;
                result = add(result, num2);
                cout << "\nResult: " << result << "\n";
                break;
            case 2:
                cout << "\nPlease enter a number: ";
                cin >> num2;
                result = sub(result, num2);
                cout << "\nResult: " << result << "\n";
                break;
            case 3:
                cout << "\nPlease enter a number: ";
                cin >> num2;
                result = mult(result, num2);
                cout << "\nResult: " << result << "\n";
                break;
            case 4:
                cout << "\nPlease enter a number: ";
                cin >> num2;
                result = divi(result, num2);
                cout << "\nResult: " << result << "\n";
                break;
            case 5:
                cout << "\nPlease enter a number: ";
                cin >> num2;
                result = mod(result, num2);
                cout << "\nResult: " << result << "\n";
                break;
            case 6:
                contCalc = false;
                break;
        }
        
    }
    cout << "\nFinal Result: " << result << "\n";
}
