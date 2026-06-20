#include <iostream>
using namespace std;
int main()
{
    float average; // holds the grade average
    cout << "Input your average:" << endl;
    cin >> average;
    if (average > 100)
        cout << "Invalid Data" << endl;
    else if (average <= 100 && average >= 90)
        cout << "A";
    else if (average <= 89 && average >= 80)
        cout << "B";
    else if (average <= 79 && average >= 60)
        cout << "You Pass";
    else if (average <= 59 && average >= 0)
        cout << "You Fail";   
    return 0;
}