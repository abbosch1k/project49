#include <iostream>
using namespace std;

int main() {
    string cmd;

    while(true) {
        cout << "Enter command: ";
        cin >> cmd;

        if(cmd == "login") cout << "User logged in\n";
        else if(cmd == "data") cout << "Sending data\n";
        else if(cmd == "exit") break;
        else cout << "Unknown command\n";
    }
}
