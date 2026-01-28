#include <iostream>
using namespace std;

int findMode(int* array, int n);

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Invalid array size!" << endl;
        return 1;
    }
    
    int* array = new int[n];
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    
    int mode = findMode(array, n);
    if (mode == -999999) { 
        cout << "No mode found.\n";
    } else {
        cout << "Mode is: " << mode << endl;
    }
    
    delete[] array;
    return 0;
}

int findMode(int* array, int n) {
    if (n <= 0) return -999999;  
    
    int min = array[0];
    int max = array[0];
    
    for (int i = 1; i < n; i++) {
        if (array[i] < min) min = array[i];
        if (array[i] > max) max = array[i];
    }
    
    int range = max - min + 1;
    
    if (range > 1000000) {
        cout << "Range too large. First element: " << array[0] << endl;
        return array[0];  
    }
    
    int* frequency = new int[range]();  
    
    for (int i = 0; i < n; i++) {
        frequency[array[i] - min]++;  
    }
    
    int mode = -999999;
    int maxCount = 0;
    
    for (int i = 0; i < range; i++) {
        if (frequency[i] > maxCount) {
            maxCount = frequency[i];
            mode = i + min;  
        }
    }
    
    if (maxCount == 1 && n > 1) {
        mode = -999999;
    }
    
    delete[] frequency;
    return mode;
}