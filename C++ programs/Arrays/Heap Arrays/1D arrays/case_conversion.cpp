#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    cin.ignore();
    char* lowercase= new char[n+1];
    char* uppercase=new char[n+1];
    cout<<"Enter lowercase array"<<endl;
    cin.getline(lowercase,n+1);
    cout<<"Converting lowecase to uppercase"<<endl;
    int i=0;
    while(lowercase[i]!='\0')
    {
        lowercase[i]=lowercase[i]-32;
        uppercase[i]=lowercase[i];
        i++;
    }
    cout<<uppercase<<endl;


}