#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
    ifstream dataIn;
    ofstream dataOut; 
    int quantity; 
    float itemPrice; 
    float totalBill; 

    dataIn.open("transaction.dat"); 
    dataOut.open("bill.out");
   
    dataOut << setprecision(2) << fixed << showpoint; // formatted output

    dataIn >> quantity >> itemPrice;

    totalBill = quantity * itemPrice;

    dataOut << "The total bill is $" << totalBill;

    return 0;
}