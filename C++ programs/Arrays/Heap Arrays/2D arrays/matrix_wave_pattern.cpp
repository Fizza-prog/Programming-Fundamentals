#include<iostream>
using namespace std;
int main()
{
    int rows, cols;
    cout<<"Enter rows and columns: ";
    cin>>rows>>cols;
    
    int **matrix = new int*[rows];
    for(int i=0;i<rows;i++)
        matrix[i] = new int[cols];
    
    cout<<"Enter matrix:"<<endl;
    for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
            cin>>matrix[i][j];
    
    cout<<"Wave pattern:"<<endl;
    for(int i=0;i<rows;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<cols;j++)
                cout<<matrix[i][j]<<" ";
        }
        else
        {
            for(int j=cols-1;j>=0;j--)
                cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for(int i=0;i<rows;i++)
        delete[] matrix[i];
    delete[] matrix;
    
    return 0;
}