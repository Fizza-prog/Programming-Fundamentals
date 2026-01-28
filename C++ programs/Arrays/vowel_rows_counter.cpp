#include<iostream>
using namespace std;

int main()
{
    int rows, l, isvowels;
    char array[100][100];
    char ch;
    int count = 0;
    
    cout << "Enter number of rows: ";
    cin >> rows;
    cin.ignore();
    
    cout << "Enter uppercase strings only:" << endl;
    for(int i = 0; i < rows; i++)
    {
        l = 0;
        isvowels = 1;
        cout << "Row " << i+1 << ": ";
        
        while((ch = cin.get()) != '\n' && l < 100)
        {
            array[i][l] = ch;
            
            if(array[i][l] == 'A' || array[i][l] == 'E' || 
               array[i][l] == 'I' || array[i][l] == 'O' || 
               array[i][l] == 'U')
            {
                count++;
            }
            else
            {
                isvowels = 0;
            }
            l++;
        }
        array[i][l] = '\0';
        
        if(isvowels)
            cout << "  -> Contains only vowels" << endl;
        else
            cout << "  -> Contains consonants" << endl;
    }
    cout << "\nTotal vowels count: " << count << endl;
    
    return 0;
}