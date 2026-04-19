#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream f("file.txt");
    string line;
    int i=1;

    while(getline(f,line)) {
        cout<<i++<<": "<<line<<endl;
    }
}
