#include <iostream>
#include <iomanip>
using namespace std;
// This program will input American money and convert it to foreign currency
const float EURO = 1.06;
const float PESOS = 9.73;
const float YEN = 124.35;

// Prototypes of the functions
void convertMulti(float dollars, float& euros, float& pesos);
void convertMulti(float dollars, float& euros, float& pesos, float& yen);
float convertToYen(float dollars);
float convertToEuros(float dollars);
float convertToPesos(float dollars);

int main ()
{
    float dollars;
    float euros;
    float pesos;
    float yen;

    cout << fixed << showpoint << setprecision(2);

    cout << "Please input the amount of American Dollars you want converted "
    << endl;
    cout << "to euros and pesos" << endl;
    cin >> dollars;

    // Fill in the code to call convertMulti with parameters dollars, euros, and pesos
    convertMulti(dollars, euros, pesos);
    // Fill in the code to output the value of those dollars converted to both euros
    // and pesos
    cout << "$" << dollars << " was converted to " << euros << " euros and " << pesos << " pesos"<<endl <<endl;


    cout << "Please input the amount of American Dollars you want converted\n";
    cout << "to euros, pesos and yen" << endl;
    cin >> dollars;

    // Fill in the code to call convertMulti with parameters dollars, euros, pesos and yen
    convertMulti(dollars, euros, pesos, yen);
    // Fill in the code to output the value of those dollars converted to euros,
    // pesos and yen
    cout << "$" << dollars << " was converted to " << euros << " euros, " << pesos << " pesos, and " << yen << " yen" 
    <<endl <<endl;


    cout << "Please input the amount of American Dollars you want converted\n";
    cout << "to yen" <<endl;
    cin >> dollars;

    // Fill in the code to call convertToYen
    // Fill in the code to output the value of those dollars converted to yen
    convertToYen(dollars);

    cout << "Please input the amount of American Dollars you want converted\n";
    cout << " to euros" << endl;
    cin >> dollars;

    // Fill in the code to call convert ToEuros
    // Fill in the code to output the value of those dollars converted to euros
    convertToEuros(dollars);

    cout << "Please input the amount of American Dollars you want converted\n";
    cout << " to pesos " << endl;
    cin >> dollars;

    // Fill in the code to call convertToPesos
    // Fill in the code to output the value of those dollars converted to pesos
    convertToPesos(dollars);

return 0;
}

// All of the functions are stubs that just serve to test the functions
// Replace with code that will cause the functions to execute properly

// **************************************************************************
// convertMulti
//
// task: This function takes a dollar value and converts it to euros and pesos
//
// data in: dollars
// data out: euros and pesos
//
// *************************************************************************

void convertMulti(float dollars, float& euros, float& pesos)
{
    cout << "The function convertMulti with dollars, euros and pesos "
    << endl <<" was called with " << dollars << " dollars" << endl << endl;
    euros = dollars * EURO;
    pesos = dollars * PESOS;
}

// ************************************************************************
// convertMulti
//
// task: This function takes a dollar value and converts it to euros
// pesos and yen
//
// data in: dollars
// data out: euros pesos yen
// ***********************************************************************

void convertMulti(float dollars, float& euros, float& pesos, float& yen)
{
    cout << "The function convertMulti with dollars, euros, pesos and yen"
    << endl << " was called with " << dollars << " dollars" << endl << endl;
    euros = dollars * EURO;
    pesos = dollars * PESOS;
    yen = dollars * YEN;
}

// ****************************************************************************
// convertToYen
//
// task: This function takes a dollar value and converts it to yen 
// data in: dollars
// data returned: yen
//
// ***************************************************************************

float convertToYen(float dollars)
{
    cout << "The function convertToYen was called with " << dollars <<" dollars"
    << endl << endl;
    float yen = dollars * YEN;
    cout << "$" << dollars << " is converted to " << yen << " yen" <<endl<<endl;
    return 0;
}

// ****************************************************************************
// convertToEuros
//
// task: This function takes a dollar value and converts it to euros
// data in: dollars
// data returned: euros
//
// ***************************************************************************

float convertToEuros(float dollars)
{
cout << "The function convertToEuros was called with " << dollars
<< " dollars" << endl << endl;
float euros = dollars * EURO;
cout << "$" << dollars << " is converted to " << euros << " euros" <<endl <<endl;
return 0;
}

// *****************************************************************************
// convertToPesos
//
// task: This function takes a dollar value and converts it to pesos
// data in: dollars
// data returned: pesos
//
// ****************************************************************************

float convertToPesos(float dollars)
{
cout << "The function convertToPesos was called with " << dollars
<< " dollars" << endl;
float pesos = dollars * PESOS;
cout << "$" << dollars << " is converted to " << pesos << " pesos" <<endl <<endl;
return 0;
}