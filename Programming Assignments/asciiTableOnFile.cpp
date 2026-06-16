#include <iostream>
#include <fstream>
using namespace std;

struct WriteRec {
    char ch;
    int val;
};

struct ReadRec {
    char ch;
    int val;
};

void buildAndSaveASCII(const string& filename) {
    ofstream out(filename, ios::binary);
    WriteRec r;

    for (char c = '0'; c <= '9'; c++) {
        r.ch = c;
        r.val = int(c);
        out.write((char*)&r, sizeof(WriteRec));
    }
    for (char c = 'A'; c <= 'Z'; c++) {
        r.ch = c;
        r.val = int(c);
        out.write((char*)&r, sizeof(WriteRec));
    }
    for (char c = 'a'; c <= 'z'; c++) {
        r.ch = c;
        r.val = int(c);
        out.write((char*)&r, sizeof(WriteRec));
    }
}

void decodeAndPrint(const string& filename) {
    ifstream in(filename, ios::binary);
    ReadRec r;
    cout << "Character    ASCII Value\n";
    cout << "------------------------\n";
    while (in.read((char*)&r, sizeof(ReadRec)))
        cout << "    " << r.ch << "            " << r.val << endl;
}

int main() {
    string fname = "ASCIIfile.dat";
    buildAndSaveASCII(fname);
    decodeAndPrint(fname);
    return 0;
}




