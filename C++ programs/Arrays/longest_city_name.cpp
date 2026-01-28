#include<iostream>
using namespace std;

int main()
{
    char cities[100][101];
    int n, l, longestIndex = 0;
    int length[100];
    char ch;

    cout << "Enter number of cities: ";
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++)
    {
        l = 0;
        cout << "Enter city " << i+1 << ": ";
        while((ch = cin.get()) != '\n' && l < 100)
        {
            cities[i][l] = ch;
            l++;
        }
        cities[i][l] = '\0';
        length[i] = l;

        if(length[i] > length[longestIndex])
            longestIndex = i;
    }

    cout << "\nThe longest city name is: " << cities[longestIndex] << endl;
    cout << "Length: " << length[longestIndex] << " characters" << endl;
    
    return 0;
}