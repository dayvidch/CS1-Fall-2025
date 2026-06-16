#include <iostream>
#include <iomanip>
using namespace std;


void fill_arrays(int, int, char [], int [], int&);
void print_array(char [], int[], int);

int main(){
    char character_array[100];
    int ascii_value[100];
    int index = 0;

    fill_arrays('0', '9', character_array, ascii_value, index);
    fill_arrays('A', 'Z', character_array, ascii_value, index);
    fill_arrays('a', 'z', character_array, ascii_value, index);

    print_array(character_array, ascii_value, index);
}

void fill_arrays(int start, int end, char character_array[], int ascii_value[], int& index){

    while(start <= end){
        character_array[index] = start;
        ascii_value[index] = int(start);
        start++;
        index++;
    }
}

void print_array(char character_array[], int ascii_value[], int index){

    cout << setw(15) << "Character" << setw(15) << "ACSII Value" << endl;
    cout << "-----------------------------------" << endl;
    for(int x = 0; x < index; x++){
    cout << setw(8) << character_array[x] << setw(15) << ascii_value[x] <<endl;
    }
}