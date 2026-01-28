#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file;
    file.open("records.txt", ios::app);
    file << "New entry added." << endl;
    file << "Previous data preserved." << endl;
    file.close();
    
    ifstream readFile;
    char line[500];
    readFile.open("records.txt");
    
    cout << "File contents:" << endl;
    while(readFile.getline(line, 500))
    {
        cout << line << endl;
    }
    
    readFile.close();
    return 0;
}