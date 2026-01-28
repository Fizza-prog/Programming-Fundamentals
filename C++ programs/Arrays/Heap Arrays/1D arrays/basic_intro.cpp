#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    
    int *array = new int[n];
    
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++)
        cin>>array[i];
    
    cout<<"Array: ";
    for(int i=0;i<n;i++)
        cout<<array[i]<<" ";
    
    delete[] array;
    return 0;
}