#include <fstream>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double PI = 3.14159;

struct circle
{
    double radius;
    double diameter;
    double area;
    double circumference;
};

int main()
{
    fstream indata;
    ofstream outdata; 

    indata.open("circle.dat", ios::out | ios::binary);
    outdata.open("circle.out"); 

    outdata << left << fixed << setprecision(2); 
    circle shape[20]; 
    int count = 0;

    char again = 'Y';

    do{
        cout << "Enter the following information" << endl;
        cout << "Radius of circle: ";
        cin >> shape[count].radius;

        shape[count].area = PI * pow(shape[count].radius,2);

        shape[count].diameter = shape[count].radius * 2;

        shape[count].circumference = shape[count].radius * 2 * PI;
        
        count++;

        cout << "Enter Y if you would like to input more data " <<endl;
        cin >> again;
        cin.ignore(100, '\n');

    } while(again == 'Y' | again == 'y');


    for(int x = 0; x < count; x++){
        indata.write(reinterpret_cast<char*>(&shape[x]), sizeof(circle));
    }
    indata.close();

    indata.open("circle.dat", ios::in | ios::binary);

    // write information to output file
    outdata << setw(10) << "Radius" << setw(10) << "Area" << setw(10) << "Circumference" << endl << endl;

    circle temp;
    while(indata.read(reinterpret_cast<char*>(&temp), sizeof(circle))){

        outdata << setw(10) << temp.radius
        << setw(10) << temp.area
        << setw(10) << temp.circumference
        << endl;
    }

    indata.close();
    outdata.close();

    return 0;
}