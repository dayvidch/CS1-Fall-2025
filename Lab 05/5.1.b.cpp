#include <iostream>
using namespace std;
int main()
{
    // Fill in the code to define and initialize to 1 the variable month
    float total = 0, rain, month = 1;
    cout << "Enter the total rainfall for month " << month << endl;
    cout << "Enter -1 when you are finished" << endl;
    // Fill in the code to read in the value for rain
    cin >> rain;
    // Fill in the code to start a while loop that iterates
    // while rain does not equal -1
    while(rain != -1)
    {
    // Fill in the code to update total by adding it to rain
    // Fill in the code to increment month by one
        total += rain;
        month +=1;
        
        cout << "Enter the total rainfall in inches for month " << month << endl;
        cout << "Enter -1 when you are finished" << endl;
    // Fill in the code to read in the value for rain
        cin >> rain;
    }
    if (month == 1)
    cout << "No data has been entered" << endl;
    else
    cout << "The total rainfall for the " << month-1 << " months is "<< total << " inches." << endl;
    return 0;
}