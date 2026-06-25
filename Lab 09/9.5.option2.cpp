// This program stores data about a circle in a structure.
#include <iostream>
#include <cmath> // For the pow function
#include <iomanip>
using namespace std;

// Constant for pi.
const double PI = 3.14159;

// Structure declaration
struct Circle
{
    double radius;   // A circle's radius
    double diameter; // A circle's diameter
    double area;     // A circle's area
    double xpos;
    double ypos;
    double distance;
};

int main()
{
    Circle c[6]; // Define a structure variable

    for(int x = 0; x < 6; x++){
        // Get the circle's diameter.
        cout << "Enter the diameter of circle " << x+1 << ": ";
        cin >> c[x].diameter;

        cout << "Enter the x coordinate of circle " << x+1 << ": ";
        cin >> c[x].xpos;

        cout << "Enter the y coordinate of circle " << x+1 << ": ";
        cin >> c[x].ypos;

        // Calculate the circle's radius.
        c[x].radius = c[x].diameter / 2;

        // Calculate the circle's area.
        c[x].area = PI * pow(c[x].radius, 2.0);

        //Calculate circle distance from origin
        c[x].distance = sqrt(pow(c[x].xpos, 2.0) + pow(c[x].ypos, 2.0));

        }

    for(int x = 0; x < 6; x++){
        // Display the circle data.
        cout << fixed << showpoint << setprecision(2);
        cout << "The radius and area of circle " << x+1 << " are:\n";
        cout << "Radius: " << c[x].radius << endl;
        cout << "Area: " << c[x].area << endl;
    }

    double closest = c[0].distance;
    int index = 0;
    for(int x = 1; x < 6; x++){
        if (c[x].distance < closest){
            closest = c[x].distance;
            index = x;
        }
    }

    cout << "The circle's center thats closest to the orgin is circle " << index+1 <<endl;
    cout << "The distance from the orgin is: " << closest;
    

    return 0;
}