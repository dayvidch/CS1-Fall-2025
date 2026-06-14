// This program reads in from the keyboard a record of financial information
// consisting of a person’s name, income, rent, food costs, utilities and
// miscellaneous expenses. It then determines the net money
// (income minus all expenses)and places that information in a record
// which is then written to an output file.
#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

const int NAMESIZE = 15;
struct budget //declare a structure to hold name and financial information
{
    char name[NAMESIZE+1];
    float income; 
    float rent; 
    float food; 
    float utilities; 
    float miscell; 
    float net;
};

int main()
{
    fstream indata;
    ofstream outdata; // output file of
    // student.
    indata.open("income.dat", ios::out | ios::binary); // open file as binary
    // output.
    outdata.open("student.out"); // output file that we
    // will write student
    // information to.
    outdata << left << fixed << setprecision(2); // left indicates left
    // justified for fields
    budget person[50]; //defines person to be a record
    int count = 0;

    char again = 'Y';

    do{
        cout << "Enter the following information" << endl;
        cout << "Person's name: ";
        cin.getline(person[count].name, NAMESIZE);

        cout << "Income: ";
        cin >> person[count].income;

        // FILL IN CODE TO READ IN THE REST OF THE FIELDS:
        // rent, food, utilities AND miscell TO THE person RECORD
        cout << "rent: ";
        cin >> person[count].rent;

        cout << "food: ";
        cin >> person[count].food;

        cout << "utilities: ";
        cin >> person[count].utilities;

        cout << "miscell: ";
        cin >> person[count].miscell; 
        
        // find the net field
        person[count].net = person[count].income - (person[count].rent + person[count].food 
        + person[count].utilities + person[count].miscell);

        count++;

        cout << "Enter Y if you would like to input more data " <<endl;
        cin >> again;
        cin.ignore(100, '\n');

    } while(again == 'Y');


    for(int x = 0; x < count; x++){
        indata.write(reinterpret_cast<char*>(&person[x]), sizeof(budget));
    }
    indata.close();

    indata.open("income.dat", ios::in | ios::binary);

    // write information to output file
    outdata << setw(20) << "Name" << setw(10) << "Income" << setw(10) << "Rent"
    << setw(10) << "Food" << setw(15) << "Utilities" << setw(15)
    << "Miscellaneous" << setw(10) << "Net Money" << endl << endl;

    budget temp;
    while(indata.read(reinterpret_cast<char*>(&temp), sizeof(budget))){

        outdata << setw(20) << temp.name
        << setw(10) << temp.income
        << setw(10) << temp.rent
        << setw(10) << temp.food
        << setw(15) << temp.utilities
        << setw(15) << temp.miscell
        << setw(10) << temp.net << endl;
    }

    indata.close();
    outdata.close();

    return 0;
}