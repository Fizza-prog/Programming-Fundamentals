#include<iostream>
#include<fstream>
using namespace std;

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

void addStudent()
{
    ofstream file("students.dat", ios::app | ios::binary);
    Student s;
    
    cout << "Enter Roll No: ";
    cin >> s.rollNo;
    cout << "Enter Name: ";
    cin.ignore();
    cin.getline(s.name, 50);
    cout << "Enter Marks: ";
    cin >> s.marks;
    
    file.write(reinterpret_cast<char*>(&s), sizeof(Student));
    file.close();
    
    cout << "Student record added successfully!" << endl;
}

void displayStudents()
{
    ifstream file("students.dat", ios::binary);
    Student s;
    
    cout << "\n=== Student Records ===\n";
    while(file.read(reinterpret_cast<char*>(&s), sizeof(Student)))
    {
        cout << "Roll No: " << s.rollNo << endl;
        cout << "Name: " << s.name << endl;
        cout << "Marks: " << s.marks << endl;
        cout << "-------------------\n";
    }
    
    file.close();
}

int main()
{
    int choice;
    
    do {
        cout << "\n1. Add Student\n2. Display Students\n3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while(choice != 3);
    
    return 0;
}