#include<iostream>
using namespace std;

int* expandArray(int*, int);  

int main()
{
    int n;
    cout << "Enter original array size: ";
    cin >> n;
    
    int* array = new int[n];
    
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
    int* expanded = expandArray(array, n);
    int newSize = n * 2;
    
    cout << "Expanded array: ";
    for(int i = 0; i < newSize; i++)
    {
        cout << expanded[i] << " ";
    }
    cout << endl;
    
    delete[] array;
    delete[] expanded;
    
    return 0;
}

int* expandArray(int* original, int n)
{
    int newSize = n * 2;
    int* expanded = new int[newSize];  
    

    for(int i = 0; i < n; i++)
    {
        expanded[i] = original[i];
    }
    
   
    for(int i = n; i < newSize; i++)
    {
        expanded[i] = 0;
    }
    
    return expanded;  
}