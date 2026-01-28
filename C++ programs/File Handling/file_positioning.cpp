#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file;
    file.open("position.txt");
    
    cout << "Initial position: " << file.tellp() << endl;
    file << "Testing file positioning." << endl;
    cout << "After writing: " << file.tellp() << endl;
    
    file.seekp(-10, ios::cur);
    file << "UPDATED" << endl;
    
    file.close();
    
    ifstream readFile;
    char content[200];
    readFile.open("position.txt");
    readFile.getline(content, 200);
    cout << "Final content: " << content << endl;
    
    readFile.close();
    return 0;
}