#include <iostream>
#include <cmath>

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
    return (a % b);
}
int main(){
    float num1;
    float num2;
    float result;

    cin >> num1;
    cin >> num2;
    result = mod(num1, num2);
    cout << result;
}
