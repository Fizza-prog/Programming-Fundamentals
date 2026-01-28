#include<iostream>
using namespace std;

// Function prototype
double findMedian(int*, int);

int main()
{
    int n;
    double median;

    cout << "Enter array size: ";
    cin >> n;

    while(n <= 0)
    {
        cout << "Invalid! Size must be positive: ";
        cin >> n;
    }

    int* array = new int[n];

    cout << "Enter " << n << " sorted elements:" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    median = findMedian(array, n);
    
    cout << "Median: " << median << endl;
    
    delete[] array;
    
    return 0;
}

double findMedian(int* array, int n)
{
    double median = 0.0;
    
    if(n % 2 == 0)  
    {
        int mid1 = n/2 - 1;
        int mid2 = n/2;
        median = (array[mid1] + array[mid2]) / 2.0;
    }
    else  
    {
        int mid = n/2;
        median = array[mid];
    }
    
    return median;
}