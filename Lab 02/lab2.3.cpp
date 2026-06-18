#include <iostream>
using namespace std;
const int LENGTH = 8;
const int WIDTH = 3;

int main()
{
    int perimiter = 2*(LENGTH) + 2*(WIDTH);
    int area = LENGTH * WIDTH;

    cout << "The area of the rectangle is " << area << endl;
    cout << "The perimiter of the rectangle is " << perimiter;
    
    return 0;
}