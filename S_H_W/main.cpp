#include <iostream>
#include <string>
using namespace std;

char hello(string message) {
    cout << message << "\n";
    return 0;
}

int main() {
    string message {};
    cout << "Enter text:";
    cin >> message;
    hello(message);
    
    int values[5] = {3,2,1,4,5};
    for (int i = 0; i < values[4] ; i++) {
        cout << values[i];
    }
    cout << "\n";
    return 0;
}
