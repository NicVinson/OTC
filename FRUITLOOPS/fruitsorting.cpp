#include <iostream>
#include <string>


int main(){
    //Declare an arry with 5 fruits and print
    std::cout << "Starting list:\n";
    std::string fruit1[5] = {"Apple", "Tomato", "Olive", "Pineapple", "Banana"};
    for(std::string fruitList : fruit1){
        std::cout << fruitList << "\n";
    }
    //Ask user to input 2 fruits into an array
    int x = 2;
    int y = 0;

    std::cout << "\nPlease enter two fruits not already on the list\n";
    std::cout << "Fruit One: ";
    std::string userFruit1;
    std::cin >> userFruit1;
    std::cout << "Fruit Two: ";
    std::string userFruit2;
    std::cin >> userFruit2;
    std::cout << "\n";

    //output the new list with the users input
    std::cout << "New list: \n";
    std::string fruit2[7] = {userFruit1, userFruit2, "Apple", "Tomato", "Olive", "Pineapple", "Banana"};
    for(std::string fruitList2 : fruit2){
        std::cout << fruitList2 << "\n";
    }
}