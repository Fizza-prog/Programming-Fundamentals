#include<iostream>
using namespace std;
int modifyFunction(int*,int*);
int main()
{
    int x,y,sum;
    cout<<"enter the value of x and y"<<endl;
    cin>>x>>y;
    sum=modifyFunction(&x,&y); 
    cout<<sum;
}
int modifyFunction(int *x,int*y)
{
    int temp=*x;
    *x=*y*10;
    *y=temp*10;
    return *x+*y; 
}