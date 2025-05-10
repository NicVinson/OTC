#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Create the Diet Object
class Diet{
    public:
        string foodPref;

        // I originallt couldn't get this to work so I consulted my friend who works for the federal reserve(He was my RA) and he said the issue was I didnt have a blank diet with the string in it for displaying
        Diet(){
            foodPref;
        }

        //This allows us to create the Diet object and be able to pass it to the constructor
        Diet(const string& foodPref){
            this->foodPref = foodPref;
        }
        //this is used to display the diet in the Animal Abstract
        string getDiet() const{
            return foodPref;
        }
};
//Create the Habitat Object  ----- Similar to the Diet class
class Habitat{
    
    public:
        string mainHab;
        Habitat(){
            mainHab;
        }
        Habitat(const string& mainHab){
            this->mainHab = mainHab;
        }
        string getHabitat() const{
            return mainHab;
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

    //These are protected becasue once they are made they should not be changed
    protected:
        string animalName;
        int animalAge;
        const string animalType;
        Diet animalDiet;
        Habitat animalHabitat;

    /*
    Create the public systems, creating the constructor for the animals,
    also creating the animal sounds
    */
    public:
        //Constructor which passes the parameters and allows for the customaztion of the selected animals to an extent( not including the type which is included in the class we use)
        Animal(string animalName, int animalAge, string animalType, Diet& animalDiet, Habitat animalHabitat) 
        : animalType(animalType){
            this->animalName = animalName;
            this->animalAge = animalAge;
            this->animalDiet = animalDiet;
            this->animalHabitat = animalHabitat;
        }
    // make animal sounds object
    //I still don't fully get these, from what I understand its just a function that is used in animal and we set it to 0 which makes it a pure virtual function
        virtual void animalSound() const = 0;
        virtual void animalEating() const = 0;

    //display info function this will be final as once its made there should be no changing
        virtual void animalDisplay() const final{
            cout << "Name: " << animalName << "\n";
            cout << "Age: " << animalAge << "\n";
            cout << "Species: " << animalType << "\n";
            cout << "Diet: " << animalDiet.getDiet() << "\n";
            cout << "Habitat: " << animalHabitat.getHabitat() << "\n";
            cout << "\n";
        }   
        virtual ~Animal(){} //deconstructor, I am not sure why I need this but I was told that it was important I am assuming becasue we are creating multiple instances in main
};

//The lion class, we pass the abstract through the line class or vice versa(not sure what the correct wording would be) so we can access the animal abstract
class Lion: public Animal{
    //I am honestly not sure if it should all be public but I believe it works for what you are wanting
    public:
        //Because we are passing lion through the abstract class we have to set the parameters accordingly, but this time setting the type inside the constructor so when in the main we don't have to type it out
        Lion(string name, int age, Diet diet, Habitat habitat)
        :Animal(name, age, "Lion", diet, habitat){}

    //animal sounds, these allow for the animal to make different noises and allows us to be able to change the sounds of the virtual functions depending on which class is called
    void animalSound() const override{
        cout << animalName << " yells: Meow!\n";
        cout << "\n";
    }
    void animalEating() const override{
        cout << animalName << " eats: NOMNOM\n";
        cout << "\n";
    }
};

//Elephant class pretty much identical to the animal class
class Elephant: public Animal{
    public:
        Elephant(string name, int age, Diet diet, Habitat habitat)
        :Animal(name, age, "Elephant", diet, habitat){}
    void animalSound() const override{
        cout << animalName << "yells: Woooooooo!\n";
        cout << "\n";
    }
    void animalEating() const override{
        cout << animalName << "eats: Crunchhhh\n";
        cout << "\n";
    }
};

//This is another area that I am not sure if I am doing it correctly or not
int main(){
    //I believe according tot he canvas instructions we are to set the diet and habitat in the main then put it into the different animals
    Diet plantEater("Herbivore");
    Diet meatEater("Carnivore");
    Habitat grass("Grasslands");
    Habitat sand("Sahara");

    //create a vector which inlcudes the elephant and the lion when passed through animal, this is for the pure virtual I believe my RA helped me on this to try and understand it
    vector<Animal*> collection;

    //I wasn't sure how you wanted them inserted into the collection so here ya go
    collection.insert(collection.begin(), new Lion("Bart", 3, meatEater, grass));
    collection.insert(collection.begin(), new Lion("Allen", 7, meatEater, grass));
    collection.insert(collection.begin(), new Elephant("Henry", 22, plantEater, sand));
    collection.insert(collection.begin(), new Elephant("Who", 6, plantEater, sand));
    
    //Displays all of the information for the animal collection and uses the constructors set earlier
    for(Animal* allAns : collection){
        allAns->animalDisplay();
        allAns->animalEating();
        allAns->animalSound();
    }
}




