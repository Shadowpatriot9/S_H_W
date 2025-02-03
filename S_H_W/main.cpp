#include <iostream>
#include <string>
using namespace std;

char hello(char message) {
    cout << "Hello World" << "\n";
    return 0;
}

int main() {
    char message {};
    hello(message);
    return 0;
}
