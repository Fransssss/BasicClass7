//
// Created by Fransiskus Agapa on 8/23/2022.
//
// Definition  Restaurant Class

#include "Restaurant.h"
#include "sstream"

using std::stringstream;

void Restaurant::SetName(const string &theName)
{
    _name = theName;
}

void Restaurant::SetRating(const int &theRating)
{
    _rating = theRating;
}

void Restaurant::SetComment(const string &theComment)
{
    _comment = theComment;
}

string Restaurant::GetName() const
{
    return _name;
}

int Restaurant::GetRating() const
{
    return _rating;
}

string Restaurant::GetComment() const
{
    return _comment;
}

string Restaurant::GetJSON() const
{
    stringstream lineJSON;
    lineJSON << "{\"Name\":\"" << _name << "\", \"Rating\":" << _rating << ", \"Recommend\":\"" << _comment << "\"}";
    return lineJSON.str();  // return as string
}
