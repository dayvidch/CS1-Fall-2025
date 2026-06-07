#include <iostream>
using namespace std;
const int AT_BAT = 421;
const int HITS = 123;
int main()
{
    double batAvg;
    batAvg = static_cast<double>(HITS) / AT_BAT; 
    cout << "The batting average is " << batAvg << endl; // an assignment statement
    // output the result
    return 0;
}