#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    //option 1
    cout << "menu: 1. Coffee 2. Tea 3. Coke 4. Orange Juice" <<endl;

    int response;
    int person = 1;
    int coffee = 0, tea = 0, coke = 0, orangeJuice = 0;

    while (response != -1)
    {
        cout << "Please input the favorite drink of person# "  << person++ 
        <<": Choose 1,2,3, or 4 from the menu above or -1 to exit the program" << endl;

        cin >> response;

        if(response == 1)
            coffee += 1;
        else if(response == 2)
            tea += 1;
        else if(response == 3)
            coke += 1;
        else if(response == 4)
            orangeJuice += 1;
    }

    cout << endl << "The total number of people surveyd is " << person << ". The results are as follows: " << endl;

    cout << left << setw(15) << "beverages" << setw(15) << "Number of votes" <<endl;
    cout << "******************************************" << endl;
    cout << setw(15) << "Coffee" << setw(15) << coffee <<endl;
    cout << setw(15) << "Tea" << setw(15) << tea <<endl;
    cout << setw(15) << "Coke" << setw(15) << coke <<endl;
    cout << setw(15) << "Orange Juice" << setw(15) << orangeJuice <<endl;


    //option 2
    int time, distance;
    float d = 0;

    cout << "please input the time of fall in seconds: " << endl;
    cin  >> time;

    cout << "please input the height of the bridge in meters: " << endl;
    cin  >> distance;

    cout << "Time falling (seconds) Distance Fallen (meters)" << endl;
    cout << "************************************************" << endl;


    for(int t = 0; t <= time; t++)
    {
        d = 0.5 * 9.8 * pow(t, 2);
        cout <<setw(15)<< t << setw(15) << d << endl;
        
       if(d > distance){
            cout << "Warning - Bad Data: The distance fallen exceeds the height of the bridge";
        }

    }


    //option 3
    int workers;
    int total = 0;
    cout << "How many tellers worked at Nation's Bank during the last 3 years?" << endl;
    cin >> workers;

    for(int x = 1; x <= workers; x++){
        for( int y = 1; y<= 3; y++){
            int days;
            cout << "How many days was teller " << x << " out sick during year " << y <<"?" << endl;
            cin >> days;
            total += days;
        }

    }
    cout << endl << "The " << workers << " tellers were out sick for a total of " << total << " days in the last 3 years.";


    return 0;
}