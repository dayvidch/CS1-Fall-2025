#include <iostream>
#include <iomanip>
using namespace std;

struct ascii{
    char character;
    int value;
};

void write(char, char, int&, ascii[]);
void print(ascii[], int);

int main(){
    int index = 0;
    ascii symbol[123];

    cout << setw(15) << "Character" << setw(15) << "ACSII Value" << endl;
    cout << "-----------------------------------" << endl;

   write('0','9', index, symbol);
   write('A','Z', index, symbol);
   write('a','z', index, symbol);

   print(symbol, index);

   return 0;
}

void write(char start, char end, int& index, ascii arr[]){
    while(start <= end){
    arr[index].character = start;
    arr[index].value = int(start);
    index += 1;
    start += 1;

    }
}

void print( ascii arr[], int index){
    for(int x = 0; x < index; x++){
        cout << setw(12) << arr[x].character << setw(12) << arr[x].value << endl;
 
   }
}

