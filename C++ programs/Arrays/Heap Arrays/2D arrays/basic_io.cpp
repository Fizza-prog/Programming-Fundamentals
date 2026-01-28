#include<iostream>
using namespace std;
int main()
{
    int rows,cols;
    cout<<"Enter the rows and columns"<<endl;
    cin>>rows>>cols;
    int l=cols*2-1;
    //initialized array
    char**array=new char*[rows];
    for(int i=0;i<rows;i++)
    {
        array[i]=new char[l+1];
    }
    cin.ignore(); //clear buffer
    //take input
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<l;j++)
        {
            array[i][j]=cin.get();
        }
        cin.ignore();
        array[i][l]='\0';
    }
    cin.ignore();//clear buffer incase
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<l;j++)
        {
            cout<<array[i][j]<<endl;
        }
    }
    
}