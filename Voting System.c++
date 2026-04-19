#include <iostream>
using namespace std;

int main() {
    int a=0,b=0, vote;

    for(int i=0;i<3;i++) {
        cin >> vote;
        if(vote==1) a++;
        else b++;
    }

    cout << "A:" << a << " B:" << b;
}
