#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

struct Ascii
{
    char ch;
    int value;
};

void build_range(char first, char last, fstream& out, int& count)
{
    Ascii Temp;
    for (char c = first; c <= last; ++c)
    {
        
        Temp.ch = c;
        Temp.value = static_cast<int>(c);
        out.write(reinterpret_cast<char*>(&Temp), sizeof(Ascii));
        count++;
    }
}

void read_and_print(const string& filename, int count)
{
    ifstream in(filename, ios::binary);
    if (!in)
    {
        cerr << "Cannot open file: " << filename << "\n";
        return;
    }
    
    cout << "Characters" << setw(16) << "ASCII Value" << endl << endl;
    cout << "- - - - - - - - - - - - - -" << endl << endl;
    Ascii Temp;
    for (int i = 0; i < count; ++i)
    { 
        in.read(reinterpret_cast<char*>(&Temp), sizeof(Ascii));
        cout << right << setw(5) << Temp.ch << right << setw(16) << Temp.value << endl << endl;
    }
}

int main()
{
    const string filename = "ASCIIfile";
    fstream out(filename, ios::out | ios::binary);

    if (!out)
    {
        cerr << "Cannot open file for writing: " << filename << "\n";
        return 1;
    }
    int count = 0;
    build_range('0', '9', out, count);
    build_range('A', 'Z', out, count);
    build_range('a', 'z', out, count);
    out.close();
   
    read_and_print(filename, count);

    return 0;
}

