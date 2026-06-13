#include <iostream>
#include <iomanip>
using namespace std;

struct dimensions{
    float length, width;
};

struct results{
    float area, perimeter;
};

struct rectangle{
    results attributes;
    dimensions sizes;
};


results area(rectangle);
results perimeter(rectangle);

int main()
{
    // Fill in code to define a rectangle structure variable named box.
    rectangle box;
    cout << "Enter the length of a rectangle: ";
    // Fill in code to read in the length to the appropriate location
    cin >> box.sizes.length;
    cout << "Enter the width of a rectangle: ";
    // Fill in code to read in the width to the appropriate location
    cin >> box.sizes.width;
    cout << endl << endl;
    // Fill in code to compute the area and store it in the appropriate
    // location
    box.attributes.area = area(box).area;
    // Fill in code to compute the perimeter and store it in the
    // appropriate location
    box.attributes.perimeter = perimeter(box).perimeter;
    
    cout << fixed << showpoint << setprecision(2);
    cout << "The area of the rectangle is " << box.attributes.area << endl;
    cout << "The perimeter of the rectangle is " << box.attributes.perimeter
    << endl;
    return 0;
}

results area(rectangle box){
    results temp;
    temp.area = box.sizes.length * box.sizes.width;
    return temp;
}

results perimeter(rectangle box){
    results temp;
    temp.perimeter = (box.sizes.length * 2) + (box.sizes.width * 2);
    return temp;
}