#include <iostream>
using namespace std;

int main() {
    int marks, pass=0, fail=0;

    for(int i=0;i<3;i++) {
        cin >> marks;
        if(marks>=50) pass++;
        else fail++;
    }

    cout<<"Pass:"<<pass<<" Fail:"<<fail;
}
