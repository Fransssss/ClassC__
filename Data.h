// Created by Fransiskus Agapa on 8/25/2022.

#ifndef CLASSC___DATA_H
#define CLASSC___DATA_H

#include "string"

using std::string;

class Data
{
private:
    string _firstName ;                                 // set default value
    string _lastName ;
    int _age = -1;
    string _gender ;
public:
    Data();
    Data(const string& theFirstName, const string& theLastName);       // constructor
    string GetFirstName() const;
    string GetLastName() const;
    string ToString() const;
    string ToJson() const;

};


#endif //CLASSC___DATA_H
