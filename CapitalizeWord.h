//
// Created by Fransiskus Agapa on 8/25/2022.
//

#include "string"
#include "cctype"

using std::islower;
using std::toupper;
using std::string;

string Capitalize(string& word)
{
    if(islower(word[0]))
    {
        word[0] = toupper(word[0]);
    }
    return word;
}
