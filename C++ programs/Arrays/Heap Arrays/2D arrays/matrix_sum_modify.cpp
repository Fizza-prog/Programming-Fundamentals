#include<iostream>
using namespace std;
int main()
{
    int row, col;
    cout<<"Enter rows and columns: ";
    cin>>row>>col;
    
    int sum=0;
    int **array=new int*[row];
    for(int i=0;i<row;i++)
        array[i]=new int[col];
    
    cout<<"Enter matrix:"<<endl;
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
        {
            cin>>array[i][j];
            sum += array[i][j];
        }
    
    cout<<"Sum: "<<sum<<endl;
    
    // Modify center element
    if(row>0 && col>0)
    {
        int centerRow = row/2;
        int centerCol = col/2;
        array[centerRow][centerCol] = sum - array[centerRow][centerCol];
    }
    
    cout<<"Modified matrix:"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            cout<<array[i][j]<<" ";
        cout<<endl;
    }
    
    for(int i=0;i<row;i++)
        delete[] array[i];
    delete[] array;
    
    return 0;
}