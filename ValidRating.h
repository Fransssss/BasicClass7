//
// Created by Fransiskus Agapa on 8/23/2022.
//

#ifndef BASICCLASS7_VALIDRATING_H
#define BASICCLASS7_VALIDRATING_H

#include "string"
#include "cctype"

using std::isdigit;
using std::string;

bool ValidateRating(string& rating)
{
    int amountValidDigit = rating.size();
    int keepTrackValidDigit = 0;

    for(size_t i = 0; i < rating.size(); ++i)
    {
        if(isdigit(rating[i]))
        {
            keepTrackValidDigit += 1;
        }
    }

    if(keepTrackValidDigit != amountValidDigit)  // not all digit
    {
        return false;
    }

    return true;
}

#endif //BASICCLASS7_VALIDRATING_H
