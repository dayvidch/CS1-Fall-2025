#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    //option1
    double q1,q2,q3,q4, avg;

    cout << setprecision(2) << fixed;

    cout << "Please input your water bill for quarter 1:" << endl;
    cin >> q1;

    cout <<"Please input your water bill for quarter 2:" << endl;
    cin >> q2;


    cout <<"Please input your water bill for quarter 3:" << endl;
    cin >> q3;


    cout <<"Please input your water bill for quarter 4:" << endl;
    cin >> q4;

    avg = (q1+q2+q3+q4) / 12;

    cout << "Your average monthly bill is $" << avg << ". ";

    if(avg > 75)
        cout << "You are using excessive amounts of water";
    else if(25 <= avg && avg <= 75)
        cout << "You are using the typical amount of water";
    else
        cout << "Good job for saving water.";


    //option 2
    double total;
    double discount;

    int shirts;
    cout << "How many shirts would you like? " << endl;
    cin >> shirts;

    total = shirts * 12;

    if(shirts >= 31)
        total -= total * .25;
    else if(shirts >=21)
        total -= total * .20;
    else if(shirts >= 11)
        total -= total * .15;
    else if(shirts >= 5)
        total -= total * .10;
    else if(shirts < 0)
    {
        cout <<"Invalid Input: Please enter a nonnegative integer";
        exit(0);
    }
    else
        total = total;

    cout << setprecision(2) << fixed;
    cout << "The cost per shirt is $12 and the total cost is $" << total;


    //option 3
    char residental_status;
    char room;
    double bill = 0;

    cout << "Please input \"I\" if you are in-state or \"O\" if you are out-of-state:" << endl;
    cin >> residental_status;

    cout << "Please input \"Y\" if you require room and board and \"N\" if you do not:" << endl;
    cin >> room;

    if(residental_status == 'I')
        bill += 3000;
    else if(residental_status == 'O')
        bill += 4500;
    else
    {
        cout << "Invalid input for resident status";
        exit(0);
    }

    if(room == 'Y')
    {
        if(residental_status == 'I')
            bill += 2500;
        else
            bill += 3500;
    }
    else if(room == 'N')
        bill += 0;
    else
    {
        cout << "Invalid input for room and board";
        exit(0);
    }

    cout << "Your bill for the semester is $" << bill;

    return 0;
}