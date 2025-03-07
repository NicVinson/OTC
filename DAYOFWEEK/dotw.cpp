#include <iostream>

//these included librarys are necessary to be able to convert a user entered string into all lowercase
#include <algorithm>
#include <cctype>
#include <string>

int main(){
    //create a string variable to save the users selected day
    std::string day;    
    int dayToNum;  //for converting the day to a number for a switch case


    //user prompt, and save to day variable
    std::cout << "Enter the day of the week: ";
    std::cin >> day;
    
    //transforms a string into all lowercase
    std::transform(day.begin(), day.end(), day.begin(), [](unsigned char c) {return std::tolower(c);});


    //used if statments to get all the dats set to numbers
    if(day == "monday" || day == "tuesday" || day == "thursday")
    {
        dayToNum = 1;
    } else if(day == "wednesday"){
        dayToNum = 2;
    } else if(day == "friday"){
        dayToNum = 3;
    } else if(day == "saturday" || day == "sunday"){
        dayToNum = 4;
    }  // no else statement since we are using a switch and the default case will take care of it

    //switch statement that takes the number assigned a day or days and then outputs based on what was inputed by the user
    switch (dayToNum)
    {
        case 1:
            std::cout << "It's a weekday!\n";
            break;
        case 2:
            std::cout << "Hump Daaaaay.!\n";
            break;
        case 3:
            std::cout << "TGIF!\n";
            break;
        case 4:
            std::cout << "It's the weekend!\n";
            break;
        default:
            std::cout << "Uh-Oh something went wrong, please try again.\n";
    }
}