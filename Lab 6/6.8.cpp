//option 1

#include <iostream>
using namespace std;

const float MI = 0.621;
const float KM = 1.61;

int main(){
    float choice;
    float input;

    void milesTOKM(float);
    void kmTOMI(float);

    cout << "please input" << endl << "1 Convert miles to kilometers" <<endl <<"2 Convert kilometers to miles" 
    <<endl << "3 Quit" <<endl <<endl;

    cin >> choice;

    if(choice == 1){
        cout << "please inpput the miles to be converted" <<endl;
        cin >> input;
        milesTOKM(input);
    }
    else if(choice == 2){
        cout << "please inpput the kilometers to be converted" <<endl;
        cin >> input;
        kmTOMI(input);
    }

    else{
        exit(0);
    }
}

void milesTOKM(float miles)
{
    cout << miles << " miles = " << miles * KM << " kilometers";
}

void kmTOMI(float kilometers)
{
    cout << kilometers << " kilometers = " << kilometers * MI << " miles";
}


//option 2
#include <iostream>
#include <iomanip>
using namespace std;

int wins();
int losses();
float percentage(int, int);

int main(){
    int win, lose;

    cout << "Please input the number of wins" <<endl;
    win = wins();

    cout << "Please input the number of loses" <<endl;
    lose = losses();

    cout << fixed << setprecision(2);
    cout << "The percentage of wins is " << percentage(win, lose) << "%";

}

int wins(){
    int wins;
    cin >> wins;

    return wins;
}

int losses(){
    int losses;
    cin >> losses;

    return losses;
}

float percentage(int wins, int losses){
    float percent = (double(wins) / (wins + losses)) * 100;
    return percent;
}