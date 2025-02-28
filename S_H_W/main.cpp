#include <iostream>
#include <string>
#include <vector>
#include <ranges>
#include <cstdio>
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

void foo () {
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
    return;
}

void intro () {
    string option [] = {"Square", "Circle"};
    
    printf("Options:\n");
    for (string & element : option) {
        printf("- %s\n", element.c_str());
    }
    printf("\n\nEnter your shape: ");
}

void shape_generator() {
    string shape;
    cin >> shape;
    
    if (shape == "square") {
        int x = 10;
        int y = 5;
        
        printf("\n");
        for (int j=0; j < y; j++) {
            for (int i = 0; i < x; i++) {
                printf("#");
            }
            printf("\n");
        }
    } else if (shape == "circle") {
        printf("Enter Circle Height:\n");
        int circle_height;
        cin >> circle_height;
        printf("Enter Circle Width:\n");
        int circle_width;
        cin >> circle_width;


        // Circle Dimensions
        string ch = "#";
        string ws = " ";
//        int circle_width = 100;
//        int circle_height = 40;
        
        // Creation Variables
        int top_line_ch = (circle_width/2);
        int bot_line_ch = top_line_ch;
        int ws_outside_depth = circle_width - 3;
        int ws_mid_depth = circle_width - 3;
        int ch_depth = 2;
        int beg_ws = ws_outside_depth + 3;
        
        // Top Line
        cout << endl;
        for (int i=0;i<beg_ws;i++){
            cout << ws;
        }
        for (int i=0;i<top_line_ch;i++){
            cout << ch;
        }
        cout << endl;

        // Middle of Circle
        ws_mid_depth -= (ws_outside_depth/2);
        for (int i=0;i<(circle_height/2);i++){
            // Outside WhiteSpace
            for (int i=0;i<=ws_outside_depth;i++){
                cout << ws;
            }
            // Line Printer
            for (int i=0;i<ch_depth;i++){
                cout << ch;
            }
            // Inside WhiteSpace
            for (int i=0;i<=ws_mid_depth;i++){
                cout << ws;
            }
            // Line Printer
            for (int i=0;i<ch_depth;i++){
                cout << ch;
            }
            // Outside WhiteSpace
            for (int i=0;i<=ws_outside_depth;i++){
                cout << ws;
            }

            ws_mid_depth += 2;
            ws_outside_depth --;
            cout << endl;
        }
        for (int i=0;i<(circle_height/2);i++){
            // Outside WhiteSpace
            for (int i=0;i<=ws_outside_depth;i++){
                cout << ws;
            }
            // Line Printer
            for (int i=0;i<ch_depth;i++){
                cout << ch;
            }
            // Inside WhiteSpace
            for (int i=0;i<=ws_mid_depth;i++){
                cout << ws;
            }
            // Line Printer
            for (int i=0;i<ch_depth;i++){
                cout << ch;
            }
            // Outside WhiteSpace
            for (int i=0;i<=ws_outside_depth;i++){
                cout << ws;
            }

            ws_mid_depth -= 2;
            ws_outside_depth ++;
            cout << endl;
        }
        
        // Bottom Line
        for (int i=0;i<beg_ws;i++){
            cout << ws;
        }
        for (int i=0;i<bot_line_ch;i++){
            cout << ch;
        }
        cout << endl;
    }
}

void chess_piece_box () {

    
//    for (int i = 0; i < top_bot; i++) {
//        cout << box_top;
//    }
//    cout << endl;
//    for (int j = 0; j < sides_height ; j++){
//        cout << sides << "   " << sides << endl;
//    }
//    for (int i = 0; i < top_bot; i++) {
//        cout << box_top;
//    }
//

}

void chess_board (int size_x, int size_y) {
    int top_bot_x = 5;
    int x = top_bot_x * size_x;
    char sides {'|'};
    int sides_height = 2;
    
    // Top Line
    for (int i = 0 ; i < x ; i ++) {
        cout << '=';
    }
    cout << endl;
    
    // Box Sides
    for (int i = 0 ; i < size_x; i++) {
        for (int j = 0; j < sides_height ; j++){
            cout << sides << "   " << sides << endl;
        }
        // Mid Lines
        for (int i = 0 ; i < x ; i ++) {
            cout << '-';
        }
        cout << endl;
    }
    
    // Bot Line
    for (int i = 0 ; i < x ; i ++) {
        cout << '=';
    }
}

int main() {
    
    int size_x;
    int size_y;
    cout << "How Wide? ";
    cin >> size_x;
    cout << "How Tall? ";
    cin >> size_y;
    
    chess_board(size_x, size_y);
    
    cout << "\n\n";
    return 0;
}
