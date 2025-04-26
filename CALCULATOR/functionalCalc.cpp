#include <iostream>
//#include <cmath>

using namespace std;

void functionality(int a, int b, int c, float d){
    switch(c){
        case 1:
            d = a + b;
            cout << d;
            break;
        case 2:
            d = a - b;
            cout << d;
            break;
        case 3:
            d = a * b;
            cout << d;
            break;
        case 4:
            d = a / b;
            cout << d;
            break;
        case 5:
            d = a % b;
            cout << d;
            break;
        default:
            break;


    }
}


int main(){
    cout << "-----Operation Menu-----\n";
    cout << "1: Addition(+)\n2: Subtraction(-)\n3: Multiplication(*)\n4: Division(/)\n5: Modulo(%)\n6: Exit\n";
    int userSelection;
    cout << "Select your operation: ";
    cin >> userSelection;
    bool trueOp = false;
    while(trueOp == false){
        if(userSelection > 6 || userSelection < 1){
            cout << "Invalid Selection, please try again: ";
            cin >> userSelection;
        }
        else if(userSelection == 6){
            return 0;
        }
        else{
            break;
        }
    }
    int userNum1;
    int userNum2;
    float result;
    cout << "\nEnter first number: ";
    cin >> userNum1;
    cout << "\nEnter second number";
    cin >> userNum2;

    functionality(userNum1, userNum2, userSelection, result);
    

}