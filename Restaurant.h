//
// Created by Fransiskus Agapa on 8/23/2022.
//
// Declaration Restaurant Class

#ifndef BASICCLASS7_RESTAURANT_H
#define BASICCLASS7_RESTAURANT_H

#include "string"

using std::string;

class Restaurant
{
private:
    string _name = "No Name";
    int _rating  = -1;
    string _comment = "No Comment";
public:
    void SetName(const string& theName);
    void SetRating(const int& theRating);
    void SetComment(const string& theComment);
    string GetName() const;
    int GetRating() const;
    string GetComment() const;
    string GetJSON() const;

};


#endif //BASICCLASS7_RESTAURANT_H
