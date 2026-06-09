#include <iostream>
using namespace std;
int main()
{
    int numStudents, numWeekend;
    float numHours, total, Baverage, Paverage, totalProgramming, totoalBiology;
    int student,day = 0; // these are the counters for the loops

    cout << "This program will find the average number of hours a day"
        << " that a student spent programming and biology over a long weekend\n\n";
    cout << "How many students are there ?" << endl;
    cin >> numStudents;
    cout << "Enter the number of days in the long weekend" << endl;
    cin >> numWeekend; 

    for(student = 1; student <= numStudents; student++)
    {
    
        totalProgramming = 0;
        totoalBiology = 0;

        for(day = 1; day <= numWeekend; day++)
        {
            cout << "Please enter the number of hours worked by student "
            << student <<" on day " << day << " studying programming." << endl;
            cin >> numHours;
            totalProgramming  = totalProgramming + numHours;
            

            cout << "Please enter the number of hours worked by student "
            << student <<" on day " << day << " studying biology." << endl;
            cin >> numHours;
            totoalBiology = totoalBiology + numHours;

        }
        cout << "P:" << totalProgramming <<endl;
        cout << "B:" << totoalBiology << endl;
        Paverage = 0;
        Baverage = 0;
        Paverage = totalProgramming / numWeekend;
        Baverage = totoalBiology / numWeekend;

        cout << "Pavg: " << Paverage <<endl;
        cout << "Bavg: " << Baverage << endl;

        cout << endl;
        if(Paverage > Baverage)
            cout << "Student " << student << " on average spend the most time on Programming";
        else if(Baverage > Paverage)
            cout << "Student " << student << " on average spend the most time on Biology";
        else
            cout << "Student " << student << " on average spend the same time on both Biology and Programming";
        
        cout << endl << endl << endl;
    }
    return 0;
}