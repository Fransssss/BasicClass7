// Author: Fransiskus Agapa
// 8/23/22
// Practices make improvement - Have Fun !
// :)

#include <iostream>
#include "Restaurant.h"
#include "CapitalizeWord.h"
#include "ValidRating.h"

// ======================
// user rate a made up restaurant
// give name of restaurant, rating, and comment yes or no if they want to go visit again
// ======================

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;
using std::stoi;

int main()
{
    string choice;                                        // user choice
    cout << "\n== Restaurant Survey == " << endl;
    cout << "1. Input data" << endl;
    cout << "e. Exit" << endl;
    cout << "choice: ";
    cin >> choice;

    while(choice != "e" and choice != "E")
    {
        if(choice == "1")
        {
            string name;
            string rating;                 // validate as string and change to int
            string comment;
            bool validRating;
            Restaurant restaurant;         // class object

            // name
            cout << endl;
            cout << "Input name of the restaurant: ";
            while(name.size() == 0)       // keep asking name while no input / empty
            {
                getline(cin, name);
            }
            Capitalize(name);
            restaurant.SetName(name);
            cout << endl;

            // rating
            cout << "Input rating 1 - 5: ";
            cin >> rating;
            validRating = ValidateRating(rating);
            if(validRating and stoi(rating) >= 1 and stoi(rating) <= 5)   // rating should be equal to or less than 5
            {
                restaurant.SetRating(stoi(rating));                       // send rating as int
            }
            else
            {
                cout << "\n[ Invalid rating ]" << endl;
            }

            // comment
            cout << endl;
            cout << "Would you recommend to people to visit " << name << " (yes/no)?";
            cin >> comment;
            if(comment == "yes" or comment == "Yes" or comment == "YES")
            {
                Capitalize(comment);                 
                restaurant.SetComment(comment);
            }
            else if(comment == "NO" or comment == "No" or comment == "no")
            {
                Capitalize(comment);
                restaurant.SetComment(comment);
            }
            else
            {
                cout << "\n[ Invalid response ]" << endl;
            }

            cout << endl << "=============== Restaurant Review ====================" << endl;
            cout << "Name: " << restaurant.GetName() << endl;
            cout << "Rating: " << restaurant.GetRating() << endl;
            cout << "Recommend: " << restaurant.GetComment() << endl;
            cout << endl << restaurant.GetJSON() << endl;
            cout << endl << "======================================================" << endl;
        }
        else
        {
            cout << "\n[ Invalid choice ] " << endl;
        }

        cout << "\n== Restaurant Survey == " << endl;
        cout << "1. Input data" << endl;
        cout << "e. Exit" << endl;
        cout << "choice: ";
        cin >> choice;
    }

    if(choice == "e" or choice == "E")
    {
        cout << "\n== Exit Program ==" << endl;
    }

    return 0;
}
