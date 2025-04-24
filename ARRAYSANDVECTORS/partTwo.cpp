//Figure out what libraries to use
#include <iostream>
#include <vector>

using namespace std;

//Created a function to print out vectors(I didn't want to retype a for loop every time)
void printVec(const vector<int>& vec){
    for(int a : vec){
        cout << a << " ";
    }
    cout << "\n";
}

int main(){
//Declare a vector of integers
vector<int> theInts = {2, 5, 7};

//Print the original vector using a loop.
cout << "Original Vector: \n";
printVec(theInts);

//Clear Function
cout << "\nAfter clear()\n";
theInts.clear();  //Clears entire vector
printVec(theInts);

//Push back function
cout << "\nAfter push_back(5)\n";
theInts.push_back(5);  //Traditionally adds the 5 to the back of the vector, but as I cleared the vector it will be the only value
printVec(theInts);

//Insert Function
cout << "\nAfter using insert(theInts.begin(), 6)\n";
theInts.insert(theInts.begin(), 6);  //Inserts the value into the 0 index
printVec(theInts);

//Size function
cout << "\nVector Size\n";
int vecSize = theInts.size();  //Counts total index values and then outputs how many values are in the vector
cout << vecSize << "\n";

//Pop back function
cout << "\nAfter pop_back()\n";
theInts.pop_back();  //Drops the last index from the vector
printVec(theInts);

//At function
//I added some more values so I could specify an index to print out
theInts.push_back(7);
theInts.insert(theInts.begin()+ 1, 9);
cout << "\nVector additions: ";
printVec(theInts);
cout << "Value AT index 1\n";
int vecInd = theInts.at(1);  //Gets the indexed value
cout << vecInd << "\n";

//Erase function
cout << "\nAfter erase(theInts.begin() + 1): \n";
theInts.erase(theInts.begin() + 1);  //Erases a specified index
printVec(theInts);
}