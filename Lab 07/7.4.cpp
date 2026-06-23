//option 1
#include <iostream>
using namespace std;


const int TOTALYEARS = 101;
int ageFrequency[TOTALYEARS]; //reserves memory for 100 ints

int main()
{
    int input = 0;


    while(input != -99){
        
        cout << "Please input an age from 1-100, put -99 to stop" <<endl;
        cin >> input;
        if(input == -99)
            break;
        ageFrequency[input] += 1;
    }
        

    for(int x = 0; x < TOTALYEARS; x++){
        if(ageFrequency[x] == 0){
            continue;
        }
        cout <<"The number of people " << x << " years old is " << ageFrequency[x] <<endl;
    }

    return 0;
}

//option 2
#include <iostream>
#include <iomanip>

using namespace std;

float avg(float[], int);
double highest(float[], int);
double lowest(float[], int);

int main(){

    typedef float arrayType[50];
    arrayType temps;
    int num;

    cout <<"Please input the number of temperatures to be read: " <<endl;
    cin >> num;

    for(int x = 0; x < num; x++){
        cout <<"input temperature " << x+1 << ":" <<endl;
        cin >> temps[x];
    }

    cout << fixed << setprecision(2);
    cout << "the average temperature is " << avg(temps, num) <<endl;
    cout << "the highest temperature is " << highest(temps, num) <<endl;
    cout << "the lowest temperature is " << lowest(temps, num) <<endl;

}

float avg(float array[], int size){
    double total;
    for(int x = 0; x < size; x++){
        total += array[x];
    }

    return total / size;

}

double highest(float array[], int size){
    double highest = array[0];
    for(int x = 1; x < size; x++){
        if(array[x] > highest){
            highest = array[x];
        }
    }
    return highest;
}

double lowest(float array[], int size){
    double lowest = array[0];
    for(int x = 1; x < size; x++){
        if(array[x] < lowest){
            lowest = array[x];
        }
    }
    return lowest;
}

