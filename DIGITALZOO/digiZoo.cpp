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
class Animal{
    /*
    Create protected variables should include the name and age and species, 
    as well as the diet and habitat this is because we still want to be able to 
    motify some of them but also protect the variables that we dont want to change
    I am also to lazy to seperate private and protected and protected technically does both
    */
    /*
    Create the public systems, creating the constructor for the animals,
    also creating the animal sounds
    */
};
    //include the make sound function
    //Create variables for name and age, as well as species(use a const string in the contructor for the final )



