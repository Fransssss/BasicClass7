//
// Created by Fransiskus Agapa on 8/23/2022.
//

#ifndef BASICCLASS7_CAPITALIZEWORD_H
#define BASICCLASS7_CAPITALIZEWORD_H

#include "string"
#include "cctype"

using std::string;
using std::islower;
using std::toupper;
using std::isspace;

string Capitalize(string& word)
{
    int amountSpace = 0;        // check how  many space

    for(size_t i = 0; i < word.size(); ++i)
    {
        if(isspace(word[i]))
        {
            amountSpace += 1;
        }
    }

    if(amountSpace == 1)      // expect two words for restaurant name
    {
        int stSpace;     // first space
        stSpace = word.find(' ');

        // st char in st word
        if(islower(word[0]))
        {
            word[0] = toupper(word[0]);
        }

        if(islower(word[stSpace+1]))
        {
            word[stSpace+1] = toupper(word[stSpace + 1]);
        }
    }
    else if(amountSpace == 0)   // only one word/ no space
    {
        if(islower(word[0]))
        {
            word[0] = toupper(word[0]);
        }
    }

    return word;
}

#endif //BASICCLASS7_CAPITALIZEWORD_H
