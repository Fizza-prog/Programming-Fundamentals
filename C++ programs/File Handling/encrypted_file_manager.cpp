#include<iostream>
#include<fstream>
#include<string>
using namespace std;

string encrypt(string text, int key)
{
    for(int i = 0; i < text.length(); i++) {
        if(isalpha(text[i])) {
            char base = islower(text[i]) ? 'a' : 'A';
            text[i] = ((text[i] - base + key) % 26) + base;
        }
    }
    return text;
}

string decrypt(string text, int key)
{
    return encrypt(text, 26 - key);
}

void writeEncrypted()
{
    ofstream file("secret.txt");
    string message;
    int key = 3;
    
    cout << "Enter secret message: ";
    cin.ignore();
    getline(cin, message);
    
    string encrypted = encrypt(message, key);
    file << encrypted;
    file.close();
    
    cout << "Message encrypted and saved!\n";
}

void readDecrypted()
{
    ifstream file("secret.txt");
    string encrypted;
    int key = 3;
    
    getline(file, encrypted, '\0');
    file.close();
    
    string decrypted = decrypt(encrypted, key);
    cout << "Decrypted message: " << decrypted << endl;
}

int main()
{
    int choice;
    
    do {
        cout << "\n1. Write Encrypted Message\n";
        cout << "2. Read Decrypted Message\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1: writeEncrypted(); break;
            case 2: readDecrypted(); break;
            case 3: cout << "Goodbye!\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while(choice != 3);
    
    return 0;
}