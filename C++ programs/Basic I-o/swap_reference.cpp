#include<iostream>
using namespace std;

void swapNos(int&, int&);

int main()
{
    int n1, n2;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;
    
    cout << "Before swap: " << n1 << " " << n2 << endl;
    swapNos(n1, n2);
    cout << "After swap: " << n1 << " " << n2 << endl;
    
    return 0;
}

void swapNos(int &n1, int &n2)
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}