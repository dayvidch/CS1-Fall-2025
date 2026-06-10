#include <iostream>
#include <string>
#include<string>
using namespace std;

// Fill in the prototype of the function writeProverb.
void writeProverb(string);

int main ()
{
    string wordCode;

    cout << "Given the phrase:" << endl;
    cout << "Now is the time for all good men to come to the aid of their _____" << endl;
    cout << "Please input the word you would like to have finish the proverb" << endl; 
    cin >> wordCode; 

    writeProverb(wordCode);
    return 0;
}
void writeProverb (string code)
{
    cout << "Now is the time for all good men to come to the aid of their " << code << ".";
}
