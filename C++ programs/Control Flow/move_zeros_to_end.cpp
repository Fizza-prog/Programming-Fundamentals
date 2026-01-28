#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    
    int* array = new int[n];
    
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++)
        cin >> array[i];

    int nonZeroIndex = 0;
    
    for(int i = 0; i < n; i++) {
        if(array[i] != 0) {
            int temp = array[i];
            array[i] = array[nonZeroIndex];
            array[nonZeroIndex] = temp;
            nonZeroIndex++;
        }
    }

    cout << "Array after moving zeros to end: ";
    for(int i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << endl;

    delete[] array;
    return 0;
}