#include <iostream>
#include <iomanip>

using namespace std;

int count(char [], int, char);

int main()
{

    int amount;
        
    cout << "Please input the number of grades to be read in .(1-50)" <<endl;
    cin >> amount;

    char array[amount];

    cout << "All grades must be uppercase A B C D or F)" <<endl;

    for(int x = 0; x < amount; x++){
        cout << "Input temperature " << x+1 << ":" <<endl;
        cin >> array[x];
    }

    cout << "number of A = " << count(array, amount, 'A') <<endl;
    cout << "number of B = " << count(array, amount, 'B') <<endl;
    cout << "number of C = " << count(array, amount, 'C') <<endl;
    cout << "number of D = " << count(array, amount, 'D') <<endl;
    cout << "number of F = " << count(array, amount, 'F') <<endl;



    return 0;
}

int count(char array[], int amount, char letter){
    int total = 0;

    for(int x = 0; x < amount; x++){
        if (array[x] == letter)
            total +=1;
    }
    return total;
}