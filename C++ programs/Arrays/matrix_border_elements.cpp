#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;
    
    int **array = new int*[rows];
    for(int i = 0; i < rows; i++)
        array[i] = new int[cols];
    
    cout << "Enter matrix elements:" << endl;
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            cin >> array[i][j];
    
    cout << "\nMatrix with border elements highlighted:" << endl;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(i == 0 || j == 0 || i == rows-1 || j == cols-1)
                cout << array[i][j] << " ";
            else
                cout << ". ";
        }
        cout << endl;
    }
    
    cout << "\nBorder elements only: ";
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(i == 0 || j == 0 || i == rows-1 || j == cols-1)
                cout << array[i][j] << " ";
        }
    }
    cout << endl;
    
    // Cleanup
    for(int i = 0; i < rows; i++)
        delete[] array[i];
    delete[] array;
    
    return 0;
}