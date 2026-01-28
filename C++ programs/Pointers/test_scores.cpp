#include<iostream>
using namespace std;

void sortScores(int*, int);
double calcAvg(int*, int);  

int main()
{
    int n;
    double average; 
    
    cout << "Enter number of test scores: ";
    cin >> n;
    
    while(n <= 0)  
    {
        cout << "Invalid! Enter positive number: ";
        cin >> n;
    }
    
    int *array = new int[n];
    
    for(int i = 0; i < n; i++)
    {
        cout << "Enter score for student " << i+1 << ": ";
        cin >> array[i];
        
        while(array[i] < 0)
        {
            cout << "Invalid! Score cannot be negative: ";
            cin >> array[i];
        }
    }
    
    sortScores(array, n);
    average = calcAvg(array, n);
    
    cout << "\nAverage score: " << average << endl;
    
    delete[] array;
    return 0;
}

void sortScores(int* array, int n)
{
    // Bubble sort (correct implementation)
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    
    cout << "Sorted scores: ";
    for(int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

double calcAvg(int* array, int n)  
{
    int sum = 0;
    
    for(int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    
    double average = static_cast<double>(sum) / n;  
    
    return average;
}