#include<iostream>
using namespace std;

int main()
{
    int n;
    char arr[100][100];
    char trans[100][100];
    char rev[100][100];
    
    cout << "Enter matrix size (n x n): ";
    cin >> n;
    
    cout << "Enter matrix elements:" << endl;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];
    
    // Transpose
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            trans[i][j] = arr[j][i];
    
    // Reverse each row for clockwise rotation
    for(int i = 0; i < n; i++)
    {
        int k = n - 1;
        for(int j = 0; j < n; j++)
        {
            rev[i][k] = trans[i][j];
            k--;
        }
    }
    
    cout << "\nOriginal Matrix:" << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    
    cout << "\nClockwise Rotated Matrix:" << endl;
    for(int i = 0; i < n; i++)
    {
        for(int k = 0; k < n; k++)
            cout << rev[i][k] << " ";
        cout << endl;
    }
    
    return 0;
}