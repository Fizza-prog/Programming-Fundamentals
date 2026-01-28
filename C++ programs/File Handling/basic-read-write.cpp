#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file;
    file.open("data.txt");
    file << "Hello, World!" << endl;
    file << "File handling in C++" << endl;
    file.close();
    
    ifstream readFile;
    char buffer[1000];
    readFile.open("data.txt");
    
    while(readFile.getline(buffer, 1000))
    {
        cout << buffer << endl;
    }
    
    readFile.close();
    return 0;
}