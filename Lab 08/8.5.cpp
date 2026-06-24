#include <iostream>
#include <cstring>

using namespace std;

int main(){
/* option 1

    bool palendrome = true;
    int size = 51;
    char word[size];

    cout << "Enter a string that is 50 characters or less" << endl;
    cin >> word;

    int len = strlen(word);

    for(int x = 0, y = len-1; x < y; x++, y--)
        if(word[x] != word[y]){
            palendrome = false;
        }
    
    if(palendrome)
        cout << "Your word is a palindrome";

    else 
        cout << "Your word is not a palindrome";
*/

/* opton 2


    char name1[25];
    char name2[25];

    cout << "enter 1st name: " << endl;
    cin.getline(name1, 25);

    cout << "enter 2nd name: " <<endl;
    cin.getline(name2, 25);

    cout << "The names as follows: " << endl;

    if(strcmp(name1, name2) > 0){
        cout << name2 <<endl << name1;

    }
    else if(strcmp(name1,name2) < 0){
        cout << name1 <<endl << name2;
    }

    else{
        cout << name2 <<endl << name1 <<endl;
        cout << "The names are the same";
    }
*/

/*option 3

    char string[51];
    int consonants = 0;

    cout << "enter a string of 50 characters or less" <<endl;
    cin.getline(string, 51);



    for(int x = 0; string[x] != '\0'; x++){
        if(tolower(string[x]) == 'a' || tolower(string[x]) == 'e' || tolower(string[x]) == 'i' 
        || tolower(string[x]) == 'o' || tolower(string[x]) == 'u'){
            consonants +=1;
        }
    }
    cout << "the string you entered was: " << string << endl;
    cout << "the number of consonants in that string is: " << consonants;
    
*/
}