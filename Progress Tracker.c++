#include <iostream>
using namespace std;

int main() {
    int progress=0;

    for(int i=0;i<5;i++) {
        progress+=20;
        cout<<progress<<"%\n";
    }
}
