//
// Created by Fransiskus Agapa on 8/25/2022.
//

#include "Data.h"
#include "sstream"

using std::stringstream;

Data::Data()
{
    _firstName = "No first name";                                 // set default value
    _lastName = "No last name";
    _age = -1;
    _gender = "Undefined gender";
}

Data::Data(const string &theFirstName, const string &theLastName)
{
    _firstName = theFirstName;
    _lastName = theLastName;
}

string Data::GetFirstName() const
{
    return _firstName;
}

string Data::GetLastName() const
{
    return _lastName;
}

string Data::ToString() const
{
    stringstream ss;

    ss << "First name: " << _firstName << ", Last name: " << _lastName;
    return ss.str();
}

string Data::ToJson() const
{
    stringstream jSON;
    jSON << "{\"First\":\"" << _firstName << "\",\"Last\":\"" << _lastName << "\"}";
    return jSON.str();
}

