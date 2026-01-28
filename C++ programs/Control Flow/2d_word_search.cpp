#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int rows, res, found = 0;
    char array[100][100];
    char word[100];
    
    cout << "Enter number of rows for 2D char array: ";
    cin >> rows;
    cin.ignore();
    
    cout << "Enter strings for 2D array:" << endl;
    for(int i = 0; i < rows; i++)
    {
        cin.getline(array[i], 100);
    }
    
    cout << "Enter word to search: ";
    cin.getline(word, 100);
    
    for(int i = 0; i < rows; i++)
    {
        res = strcmp(array[i], word);
        if(res == 0)
        {
            found = 1;
            break;
        }
    }
    
    if(found)
        cout << "Word found in array!" << endl;
    else
        cout << "Word not found." << endl;
        
    return 0;
}