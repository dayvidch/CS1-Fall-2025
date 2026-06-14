#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

const int NAMESIZE = 20;

struct Employee
{
    char firstName[NAMESIZE+1];
    char lastName[NAMESIZE+1];
    char fullName[NAMESIZE+1];
    int socialSecurity;
    int departmentID;
    int years;
    int salary;
};

int main()
{
    ifstream inFile("employee.in");
    fstream binaryFile("employee.dat", ios::out | ios::binary);
    ofstream outFile("employee.out");

    Employee person;

    int count = 0;
    double totalSalary = 0;
    int totalYears = 0;

    while (inFile){
        inFile >> person.firstName >> person.lastName >> person.socialSecurity
        >> person.departmentID >> person.years >> person.salary;

        strcpy(person.fullName, person.firstName);
        strcat(person.fullName, " ");
        strcat(person.fullName, person.lastName);

        binaryFile.write(reinterpret_cast<char*>(&person), sizeof(Employee));

        totalSalary += person.salary;
        totalYears += person.years;
        count++;
    }

    inFile.close();
    binaryFile.close();

    binaryFile.open("employee.dat", ios::in | ios::binary);

    outFile << left << setw(20) << "Name"
            << setw(20) << "Social Security"
            << setw(20) << "Department ID"
            << setw(20) << "Years Employed"
            << setw(20) << "Salary" << endl;

    while (binaryFile.read(reinterpret_cast<char*>(&person), sizeof(Employee))) {
        outFile << setw(20) << person.fullName
                << setw(20) << person.socialSecurity
                << setw(20) << person.departmentID
                << setw(20) << person.years
                << setw(20) << fixed << setprecision(2) << person.salary
                << endl;
    }

    outFile << endl;
    outFile << "Average Years Employed: " << totalYears / count << endl;
    outFile << "Average Salary: $" << totalSalary / count << endl;

    binaryFile.close();
    outFile.close();

    return 0;
}

