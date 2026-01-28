#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file;
    file.open("truncate_demo.txt", ios::trunc);
    file << "All previous data erased." << endl;
    file << "This is new content." << endl;
    file.close();
    
    ifstream readFile;
    char data[150];
    readFile.open("truncate_demo.txt");
    readFile.getline(data, 150);
    cout << data << endl;
    
    readFile.close();
    return 0;
}