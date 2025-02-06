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

void insertionSort(vector<int> & arr) {
    size_t i = 1;
    while (i < arr.size()) {
        int key = arr[i];
        size_t j = i;
        while (j > 0 && arr[j - 1] > key) {
            arr[j] = arr[j - 1];
            --j;
        }
        arr[j] = key;
        ++i;
    }
}

void insertionSort2(vector<int> & arr){
    size_t i = 1;
    while (i < arr.size()) {
        int x = arr[i];
        size_t j = i;
        while (j > 0 && arr[j - 1] > x) {
            arr[j] = arr[j - 1];
            --j;
        }
        arr[j] = x;
        ++i;
    }
}



int main() {
    //    hello();
    //    bubble();
    //    bubbleSort();
    
    //    // Input
    //    int m;
    //    cout << "Elements:\n";
    //    cin >> m;
    //    vector<int> arr(m);
    //    cout << "\nEnter " << m << " integers:\n";
    //    for (int i = 0 ; i < m ; ++i) {
    //        cin >> arr[i];
    //    }
    //
    ////    // Logic
    ////    insertionSort(arr);
    //    insertionSort2(arr);
    //
    //    // Output
    //    cout << "\nOutput:\n";
    //    for (int & num : arr) {
    //        cout << num << " ";
    //    }
    //
    
    long long int z[10];
    int a = 0;
    for (int i = 0 ; i < z[a] ; i++) {
        cout << z[a] << "\n";
        a++;
    }
    
    int potato = 30;
    int * ze_pointar = &potato;
    cout << "\n" << * ze_pointar << "\n\n";
    cout << "HI \n\n\n";
    
    int j = 0;
    int array[5] = {1,2,3,4,5};
    for (int l = 0 ; l < array[j] ; l++) {
        cout << array[j];
        j++;
    }
    
    
    
    cout << "\n\n";
    return 0;
}
