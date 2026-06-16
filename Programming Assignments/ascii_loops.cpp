#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setw(15) << "Character" << setw(15) << "ACSII Value" << endl;
    cout << "-----------------------------------" << endl;
    int padding = 10;

    //For loops
    for (int num = 0; num < 10; num++){
        char ascii = '0' + num;
        cout << setw(padding) << num << setw(padding) << int(ascii) << endl;
    }

    for (char upperCase = 'A'; upperCase <= 'Z'; upperCase++){
        cout << setw(padding) << upperCase << setw(padding) << int(upperCase) << endl;
    }

    for (char lowerCase = 'a'; lowerCase <= 'z'; lowerCase++){
        cout << setw(padding) << lowerCase << setw(padding) << int(lowerCase) <<endl;
    }

    cout << setw(15) << "Character" << setw(15) << "ACSII Value" << endl;
    cout << "-----------------------------------" << endl;

    // 3 other loops
    int number = 0;
    while (number < 10){
        char ascii = '0' + number;
        cout << setw(padding) << number++ << setw(padding) << int(ascii) << endl;

    }

    char upperCase = 'A';
    do{
        cout << setw(padding) << upperCase << setw(padding) << int(upperCase++) << endl;
    } while (upperCase <= 'Z');

    char lowerCase = 'a';
    do{
        cout << setw(padding) << lowerCase << setw(padding) << int(lowerCase++) <<endl;
    } while (lowerCase <= 'z');
    
    return 0;
}