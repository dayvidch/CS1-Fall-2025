#include <iostream>
using namespace std;

struct data{
        int landed;
        int departed;
        int greatest;
        int least;
};

int main(){
    data month[12];

    for(int x = 0; x < 12; x++){
        cout << "for month " << x+1 << " enter:" << endl;
        cout << "Total number of planes that landed: ";
        cin >> month[x].landed;
        cout << "Total number of planes that departed: ";
        cin >> month[x].departed;
         cout << "Greatest number of planes that landed in a given day that month: ";
        cin >> month[x].greatest;
         cout << "Least number of planes that landed in a given day that month: ";
        cin >> month[x].least;
    }

    double avgLanding, avgDeparture, totalLandings = 0, totalDepartures = 0, greatest, greatestMonth = 0, 
    least, leastMonth = 0;

    for(int x = 0; x < 12; x++){
        totalLandings += month[x].landed;
        totalDepartures += month[x].departed;
    }

    greatest = month[0].greatest;
    for(int x = 1; x < 12; x++){
       if(month[x].greatest > greatest){
        greatest = month[x].greatest;
        greatestMonth = x;
       }
    }

    least = month[0].least;
    for(int x = 1; x < 12; x++){
       if(month[x].least < least){
        least = month[x].least;
        leastMonth = x;
       }
    }

    avgLanding = totalLandings / 12;
    avgDeparture = totalDepartures / 12;

    cout << "The average monthy landings are: " << avgLanding <<endl;
    cout << "The average montly departures are: " << avgDeparture <<endl;
    cout << "The total number of landings are: " << totalLandings <<endl;
    cout << "The total number of departures are: " << totalDepartures <<endl;
    cout << "The greatest number of planes that landed on any day was: " << greatest << " on month " << greatestMonth+1 <<endl;
    cout << "The least number of planes that landed on any day was: " << least << " on month " << leastMonth+1 <<endl;

}