#include <iostream>
#include <iomanip>

using namespace std;

void ascii_value(char start, char end);

int main(){

    cout << setw(15) << "Character" << setw(15) << "ACSII Value" << endl;
    cout << "-----------------------------------" << endl;

    char startDigit = '0';
    char endDigit = '9';
    char startUpperCase = 'A';
    char endUpperCase = 'Z';
    char startLowerCase = 'a';
    char endLowerCase = 'z';

    ascii_value(startDigit, endDigit);
    ascii_value(startUpperCase, endUpperCase);
    ascii_value(startLowerCase, endLowerCase);
} 

void ascii_value(char start, char end){
    while(start <= end){
        cout << setw(8) << char(start) << setw(15) << int(start) << endl;
        start++;
    }
}
