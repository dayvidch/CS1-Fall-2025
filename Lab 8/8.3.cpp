#include <iostream>
#include <cctype>

using namespace std;

int main(){
    char last[10];

    cout << "Enter your last name with no more than 9 characters" << endl;
    cin.getline(last, 10);
    cout << last;
}