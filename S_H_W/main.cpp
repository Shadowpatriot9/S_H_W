#include <iostream>
#include <string>
#include <vector>
using namespace std;

char hello() {
    string message {};
    cout << "Enter text:";
    cin >> message;
    cout << message << "\n";
    return 0;
}

int bubbleSort() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> numbers(n);
    cout << "Enter" << n << " integers:\n";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    
    for (int i = 0; i<n-1 ; i++){
        for (int j =0; j<n-i-1; ++j){
            if (numbers[j]>numbers[j+1]){
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }
    
    cout << "Output:\n";
    for (int i = 0; i<n; ++i){
        cout << numbers[i] << " ";
    }
    return 0;
}

int main() {
//    hello();
//    bubble();
    bubbleSort();
    
    cout << "\n";
    return 0;
}


