#include <iostream>
using namespace std;
int main()
{
    char letter = 'a';
    do
    {
    cout << "Please enter a letter, enter (x) if you want to exit the loop" << endl;
    cin >> letter;
    cout << "The letter you entered is " << letter << endl;
    } while (letter != 'x');
return 0;
}