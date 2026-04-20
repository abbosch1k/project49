#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, string> cache;

    cache["user"] = "Akram";
    cache["role"] = "admin";

    string key;
    cin >> key;

    if(cache.count(key))
        cout << cache[key];
    else
        cout << "Not found";
}
