#include <iostream>
#include <iomanip>
using namespace std;


int main(){

    //option 1
    double grade1, grade2, grade3;
    double avg;

    cout << "please input the first grade" << endl;
    cin >> grade1;

    cout << "please input the second grade" << endl;
    cin >> grade2;

    cout << "please input the third grade" << endl;
    cin >> grade3;

    avg = (grade1 + grade2 + grade3)/3.0;

    cout << setprecision(2) << fixed;

    cout << "The average of the three grades is " << avg;
    return 0;


    //option 2
    const double AMERICAN = 85.00;
    const double MODERN = 57.50;
    const double FRENCH = 127.75;

    int soldAmerican, soldModern, soldFrench;

    cout << "Please input the number of American Colonial chairs sold" <<endl;
    cin >> soldAmerican;

    cout << "Please input the number of American Colonial chairs sold" <<endl;
    cin >> soldModern;

    cout << "Please input the number of American Colonial chairs sold" <<endl;
    cin >> soldFrench;
    
    cout << setprecision(2) << fixed;
    cout << "The total sales of American Colonial chairs $" << AMERICAN * soldAmerican <<endl;
    cout << "The total sales of American Colonial chairs $" << MODERN * soldModern <<endl;
    cout << "The total sales of American Colonial chairs $" << FRENCH * soldFrench <<endl;
    cout << "The total sales of all chairs $" << (AMERICAN * soldAmerican) + (MODERN * soldModern) + (FRENCH * soldFrench);


    //option 3
    double sales, stateTax, localTax;
    cout << "Please input the total sales for the month" << endl;
    cin >> sales;

    cout << "Please input the state tax percentage in decimal form (.02 for 2%)" << endl;
    cin >> stateTax;

    cout << "Please input the local tax percentage in decimal form (.02 for 2%)" << endl;
    cin >> localTax;

    cout << setprecision(2) << fixed;
    cout << "The total sales for the month is $" << sales << endl;
    cout << "The state tax for the month is $" << stateTax * sales << endl;
    cout << "The local tax for the month is $" << localTax * sales << endl;

    return 0;
}