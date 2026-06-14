#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

const int NAMESIZE = 15;
struct info
{
    char firstName[NAMESIZE+1];
    char lastName[NAMESIZE+1];
    char streetAddress[31];
    char city[21];
    char state[6];
    long zip;
};

int main()
{
    fstream indata;
    ofstream outdata; 

    indata.open("person.dat", ios::out | ios::binary);
    outdata.open("data.out"); 

    outdata << left << fixed << setprecision(2); // left indicates left
    // justified for fields
    info person[20]; //defines person to be a record
    int count = 0;

    char again = 'Y';

    do{
        cout << "Enter the following information" << endl;
        cout << "Person's first name: ";
        cin.getline(person[count].firstName, NAMESIZE);

        cout << "Person's last name: ";
        cin.getline(person[count].lastName, NAMESIZE);

        cout << "Street: ";
        cin.getline(person[count].streetAddress, 31);

        cout << "City: ";
        cin.getline(person[count].city, 21);

        cout << "State: ";
        cin.getline(person[count].state, 6);

        cout << "Zip: ";
        cin >> person[count].zip;
        cin.ignore(100, '\n');
        
        count++;

        cout << "Enter Y if you would like to input more data " <<endl;
        cin >> again;
        cin.ignore(100, '\n');

    } while(again == 'Y');


    for(int x = 0; x < count; x++){
        indata.write(reinterpret_cast<char*>(&person[x]), sizeof(info));
    }
    indata.close();

    indata.open("person.dat", ios::in | ios::binary);

    // write information to output file
    outdata << setw(20) << "First Name" << setw(20) << "Last Name" << setw(30) << "Street"
    << setw(20) << "City" << setw(10) << "State" << setw(10)
    << "Zip" << endl << endl;

    info temp;
    while(indata.read(reinterpret_cast<char*>(&temp), sizeof(info))){

        outdata << setw(20) << temp.firstName
        << setw(20) << temp.lastName
        << setw(30) << temp.streetAddress
        << setw(20) << temp.city
        << setw(10) << temp.state
        << setw(10) << temp.zip
        << endl;
    }

    indata.close();
    outdata.close();

    return 0;
}