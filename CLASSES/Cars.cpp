#include <iostream>
#include <string>
#include <vector> // Needed for using std::vector

using namespace std;

// Defining a simple Car class
class Car {
public:
    // Public attributes for now; we will discuss "private" and "protected" next week
    string VIN;  // Vehicle Identification Number (should be unique for each car)
    string make;  // Car brand (e.g., Totota, Ford)
    string model;  // Specific Model (e.g., Corolla, Mustang)
    int year;  // Manufacturing year
    double mileage;  // Current mileage of the car
    vector<string> owners;  //List of previous and current owners

    //Constructor to initialize a Car object
    Car(string vin, string mk, string mdl, int yr, double miles, vector<string> ownerList){
        VIN = vin;
        make = mk;
        model = mdl;
        year = yr;
        mileage = miles;
        owners = ownerList;
    }

    //Function to display car details
    void displayInfo(){
        cout << "VIN: " << VIN << endl;
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Mileage: " << mileage << endl;

        //Displaying owners
        cout << "Owners: ";
        for (const string& owner : owners){
            cout << owner << " ";
        }
        cout << endl;
    }
};

int main(){
    vector<string> prevOwners = {"Tod", "Michael", "Keving", "Gertrude"};  //Created a random list of 4 names to represent the previous owners
    Car usedCar("1HGCM82633A004859", "Honda", "Accord", 2012, 102345, prevOwners);  //For the VIN I used ai to generate a random not real VIN number
    usedCar.displayInfo();  // Called displayInfo on used car to display the info(Similar to what a carfax report does)
    return 0;
}

// What attributes--if any--should be private, and why? (Sorry if the grammar is bad it has been a long day at work)
/*
Realistically speaking all of the attributes should be private.
Vin: Once a vin is initiallized it should never change as that is the vehicles identification number
Make: Cars dont just change their branding(though some people switch badges), the cars make is stuck with the VIN
Model: Same reason as the make, the make and model are tied to the vin
Year: Same concept the year is tied to the vin number, and you can't, or rather shouldn't be able to change the yar
Mileage: Could be a yes or no but I would make it private to prevent creating a new random mileage and just create a function that allows you to add mileage only
Owners: You don't want to wipe the owner list and say a car has never had an owner so this would also be private
*/