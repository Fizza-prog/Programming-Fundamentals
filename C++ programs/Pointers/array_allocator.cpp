#include<iostream>
int* allocateArray(int);
using namespace std;
int main()
{
    int rows;
    cout<<"Enter the elements"<<endl;
    cin>>rows;
    allocateArray(rows);
    int *p=allocateArray(rows); 
    delete[] p;
    
}
int* allocateArray(int rows) 
{
    int*array=new int[rows];
    for(int i=0;i<rows;i++)
    {
        cin>>array[i];
    }
    return array;
    
}