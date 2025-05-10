#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Create the Diet Object
class Diet{
    public:
        
        string foodPref;
        Diet(){
            foodPref;
        }
        Diet(const string& foodPref){
            this->foodPref = foodPref;
        }
        string getDiet() const{
            return foodPref;
        }
};
//Create the Habitat Object
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
        Animal(string animalName, int animalAge, string animalType, Diet& animalDiet, Habitat animalHabitat) 
        : animalType(animalType){
            this->animalName = animalName;
            this->animalAge = animalAge;
            this->animalDiet = animalDiet;
            this->animalHabitat = animalHabitat;
        }
    // make animal sounds object
        virtual void animalSound() const = 0;
        virtual void animalEating() const = 0;

    //display info function this will be final as once its made there should be no changing
        virtual void animalDisplay() const final{
            cout << "Name: " << animalName << "\n";
            cout << "Age: " << animalAge << "\n";
            cout << "Species: " << animalType << "\n";
            cout << "Diet: " << animalDiet.getDiet() << "\n";
            cout << "Habitat: " << animalHabitat.getHabitat() << "\n";
        }   
        virtual ~Animal(){}
};
class Lion: public Animal{
    public:
        Lion(string name, int age, Diet diet, Habitat habitat)
        :Animal(name, age, "Lion", diet, habitat){}
    void animalSound() const override{
        cout << animalName << "Meow's\n";
    }
    void animalEating() const override{
        cout << animalName << "NOMNOM\n";
    }
};
int main(){
    Diet carn("Carnivore");
    Habitat grass("Grasslands");

    Lion tester("Pickles", 9, carn, grass);
    tester.animalSound();
    tester.animalEating();
    tester.animalDisplay();
}




