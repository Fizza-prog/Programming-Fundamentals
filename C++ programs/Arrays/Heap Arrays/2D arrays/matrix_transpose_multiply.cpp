#include<iostream>
using namespace std;

int main()
{
    int rows = 3, cols = 3;
    
    
    int **array = new int*[rows];
    for(int i = 0; i < rows; i++)
    {
        array[i] = new int[cols];
    }
    
    
    int **trans = new int*[rows];
    for(int k = 0; k < rows; k++)
    {
        trans[k] = new int[cols];
    }
    
    
    int **sum = new int*[rows];
    for(int i = 0; i < rows; i++)
    {
        sum[i] = new int[cols];
        for(int j = 0; j < cols; j++)
        {
            sum[i][j] = 0;  
        }
    }
    
    
    cout << "Enter a 3x3 array:" << endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin >> array[i][j];
        }
    }
    
    
    cout << "\nOriginal array:" << endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    
    
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            trans[i][j] = array[j][i];
        }
    }
    

    cout << "\nTranspose of matrix:" << endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }
    
    
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            for(int k = 0; k < cols; k++)
            {
                sum[i][j] += array[i][k] * trans[k][j];
            }
        }
    }
    
    
    cout << "\nResult of array × transpose:" << endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    

    for(int i = 0; i < rows; i++)
    {
        delete[] array[i];
        delete[] trans[i];
        delete[] sum[i];
    }
    delete[] array;
    delete[] trans;
    delete[] sum;
    
    return 0;
}