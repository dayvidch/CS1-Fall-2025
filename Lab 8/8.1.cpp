#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

//function prototypes
bool testPassWord(char[]);
int countLetters(char*);
int countDigits(char*);

int main()
{
    char passWord[20];

    cout << "Enter a password consisting of exactly 4 lowercase "
    << "letters and 6 digits:" << endl;
    cin.getline(passWord,20);

    if (testPassWord(passWord))
        cout << "Please wait - your password is being verified" << endl;
    else
    {
        cout << "Invalid password. Please enter a password "
        << "with exactly 4 letters and 6 digits" << endl;
        cout << "For example, abcd123456 is valid" << endl;
    }
    // Fill in the code that will call countLetters and
    // countDigits and will print to the screen both the number of
    // letters and digits contained in the password.

    cout << "The number of lower case letters are: " << countLetters(passWord) << endl;
    cout << "The number of digits are: " << countDigits(passWord) << endl;




    return 0;
}

//**************************************************************
// testPassWord
//
// task: determines if the word in the
// character array passed to it, contains
// exactly 5 letters and 3 digits.
// data in: a word contained in a character array
// data returned: true if the word contains 5 letters & 3
// digits, false otherwise
//
//**************************************************************
bool testPassWord(char custPass[])
{
    int numLetters, numDigits, length;
    length = strlen(custPass);
    numLetters = countLetters(custPass);
    numDigits = countDigits(custPass);
    if (numLetters == 4 && numDigits == 6 && length == 10)
        return true;
    else
        return false;
}

// the next 2 functions are from Sample Program 10.5
//**************************************************************
// countLetters
//
// task: counts the number of letters (both
// capital and lower case)in the string
// data in: a string
// data returned: the number of letters in the string
//
//**************************************************************
int countLetters(char *strPtr)
{
    int occurs = 0;
    while(*strPtr != '\0')
    {
    if (isalpha(*strPtr))
        if(islower(*strPtr))
            occurs++;
    strPtr++;
    }
    return occurs;
}   

//**************************************************************
// countDigits
//
// task: // data in: a string
// data returned: //

//**************************************************************
int countDigits(char *strPtr){
    int occurs = 0;
    while(*strPtr != '\0')
    {
        if (isdigit(*strPtr)) // isdigit determines if
        // the character is a digit
        occurs++;
    strPtr++;
    }
    return occurs;
}

