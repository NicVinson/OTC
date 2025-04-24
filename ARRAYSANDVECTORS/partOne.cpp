//Figure out what libraries need to be used
#include <iostream>

using namespace std;

void printArr(const int arr[], int size){
    for (int a = 0; a < size; ++a){
        cout << arr[a] << " ";
    }
    cout << "\n";
}
int main(){
//Declare an array of 5 values
    int mainArr[5] = {1, 2, 4, 10, 12};
//Print the array
    printArr(mainArr, 5);
//Modify 2 of the elements(We will be doing 1 and 3)
    mainArr[1] = 3;
    mainArr[3] = 11;
//Print the updated array
    printArr(mainArr, 5);
}