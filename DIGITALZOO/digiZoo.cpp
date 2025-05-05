#include <iostream>
#include <string>

using namespace std;

//Create the Diet Object
class Diet{
    public:
        string foodPref;
        Diet(const string& foodPref){
            this->foodPref = foodPref;
        }
        void dietDescriber() const{
            cout << "My Diet: " << foodPref << "\n";
        }
};
//Create the Habitat Object
class Habitat{
    public:
        string mainHab;
        Habitat(const string& mainHab){
            this->mainHab = mainHab;
        }
        void habitatDescriber(){
            cout << "My Home: " << mainHab << "\n";
        }
};
//Create the animal abstract class
    //include the make sound function
    //Create variables for name and age, as well as species(use a const string in the contructor for the final )



