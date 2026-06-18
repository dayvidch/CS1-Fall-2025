#include <iostream>
#include <string>
using namespace std;
// Definition of constants
const string FAVORITESODA = "Dr. Dolittle"; // use double quotes for strings
const char BESTRATING = 'A'; // use single quotes for characters
int main()
{
    char rating = 'B'; 
    string favoriteSnack = "crackers"; 
    int numberOfPeople = 250; 
    int topChoiceTotal = 148;

    cout << "The preferred soda is " << FAVORITESODA << endl;
    cout << "The preferred snack is " << favoriteSnack << endl;
    cout << "Out of " << numberOfPeople << " people " << topChoiceTotal << " chose these items!" << endl;
    cout << "Each of these products were given a rating of " << BESTRATING;
    cout << " from our expert tasters" << endl;
    cout << "The other products were rated no higher than a " << rating <<endl;

    return 0;
}