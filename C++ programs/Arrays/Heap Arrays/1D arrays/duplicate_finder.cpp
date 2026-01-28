#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    
    int* array = new int[n];
    
    cout<<"Enter "<<n<<" elements (0-99): ";
    for(int i=0;i<n;i++)
        cin>>array[i];
    
    int frequency[100] = {0};
    bool hasDuplicate = false;
    
    for(int i=0;i<n;i++)
    {
        if(array[i] >= 0 && array[i] < 100)
        {
            frequency[array[i]]++;
            if(frequency[array[i]] == 2)
            {
                cout<<"First duplicate found: "<<array[i]<<endl;
                hasDuplicate = true;
                break;
            }
        }
    }
    
    if(!hasDuplicate)
        cout<<"No duplicates found."<<endl;
    
    delete[] array;
    return 0;
}