#include<iostream>
using namespace std;

int main()
{
    int size = 0;
    double ptr = 0;
    
    cout << "Enter array size: ";
    cin >> size;
    
    double* array = new double[size];
    
    cout << "Enter " << size << " elements: ";
    for(int i = 0; i < size; i++)
        cin >> *(array + i);
    
    cout << "\nOriginal array: ";
    for(int i = 0; i < size; i++)
        cout << *(array + i) << " ";
    cout << endl;
    
    cout << "\nModify elements:" << endl;
    for(int i = 0; i < size; i++)
    {
        cout << "Enter new value for index " << i << ": ";
        cin >> ptr;
        *(array + i) = ptr;
    }

    cout << "\nModified array: ";
    for(int i = 0; i < size; i++)
        cout << *(array + i) << " ";
    cout << endl;

    delete[] array;
    return 0;
}