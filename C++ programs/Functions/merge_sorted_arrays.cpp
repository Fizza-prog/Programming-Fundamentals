#include<iostream>
using namespace std;

int* mergeArrays(int* arr1, int size1, int* arr2, int size2, int& mergedSize);

int main()
{
    int size1, size2;
    
    cout << "Enter size of array 1: ";
    cin >> size1;
    cout << "Enter size of array 2: ";
    cin >> size2;
    
    int mergedSize = size1 + size2;
    
    int* arr1 = new int[size1];
    int* arr2 = new int[size2];
    
    cout << "Enter " << size1 << " elements for array 1: ";
    for(int i = 0; i < size1; i++)
        cin >> arr1[i];
    
    cout << "Enter " << size2 << " elements for array 2: ";
    for(int i = 0; i < size2; i++)
        cin >> arr2[i];
    
    int* mergedArray = mergeArrays(arr1, size1, arr2, size2, mergedSize);
    
    cout << "Merged array: ";
    for(int i = 0; i < mergedSize; i++)
        cout << mergedArray[i] << " ";
    cout << endl;

    delete[] arr1;
    delete[] arr2;
    delete[] mergedArray;
    
    return 0;
}

int* mergeArrays(int* arr1, int size1, int* arr2, int size2, int& mergedSize)
{
    mergedSize = size1 + size2;
    int* mergeArray = new int[mergedSize];
    
    // Copy first array
    for(int i = 0; i < size1; i++)
        mergeArray[i] = arr1[i];
    
    // Copy second array
    for(int i = 0; i < size2; i++)
        mergeArray[size1 + i] = arr2[i];
    
    return mergeArray;
}