#include <iostream>
#include "string"
#include "Data.h"
#include "CapitalizeWord.h"

// ===================
// employee put their personal data like first and last name
// output initial and updated data
// ===================

using std::cout;
using std::endl;
using std::cin;
using std::getline;
using std::string;
using std::stoi;                       // string to int

int main()
{
     string userFirstName;
     string userLastName;
     Data initialData;

     cout << endl;

     cout << "= Initial data =" << endl;
     cout << initialData.GetFirstName() << endl;                         // default constructor is called
     cout << initialData.GetLastName() << endl;

     cout  << endl << "What is your first name: ";
     while(userFirstName.size() == 0)                                    // keep asking until user input something
     {
         cin >> userFirstName;
     }
     Capitalize(userFirstName);
     cout << endl;

     cout << "What is your last name: ";
     while(userLastName.size() == 0)
     {
         cin >> userLastName;
     }
    Capitalize(userLastName);
     cout << endl;

     Data updatedData(userFirstName, userLastName);     // class constructor is called
     cout << "= Updated data =" << endl;
     cout << updatedData.ToString() << endl << endl;
     cout << updatedData.ToJson() << endl;

    return 0;
}
