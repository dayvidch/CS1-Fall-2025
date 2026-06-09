#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
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