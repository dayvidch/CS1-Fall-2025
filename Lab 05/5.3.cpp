#include <iostream>
using namespace std;
int main()
{
    int num1, num2; 
    int total = 0; 
    int number; 
    float mean; 
    cout << "Please enter the first positive integer" << endl;
    cin >> num1;
    cout << "Please enter the second positive integer, which has to be greater than the previous number you entered" << endl;
    cin >> num2;

    int firstnum = num1;
    int denominator = 0;

    if ( num1 < num2)
    {
        for(;num1 <= num2; num1++)
        {
            total = total + num1;
            denominator += 1;
        } // curly braces are optional since there is only one statement
        mean = static_cast<float>(total) / denominator; // note the use of the typecast
        // operator here
        cout << "The mean average of the sequence " << firstnum << " and " << num2 << " positive integers is " << mean << endl;
    }
    else
    cout << "Invalid input - the second integer has to be greater than the first" << endl;
    return 0;
}