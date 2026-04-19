#include <iostream>
using namespace std;

int main() {
    bool state=false;

    for(int i=0;i<4;i++) {
        state=!state;
        cout<<state<<" ";
    }
}
