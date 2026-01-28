#include <iostream>
#include <string>
using namespace std;

const int SIZE = 100;

struct Student {
    int roll;
    string name;
    float marks;
};

Student s[SIZE];
int countStudents = 0;

// Function declarations
void add();
void showAll();
void search();
void update();
void removeStudent();

int main() {
    int option;

    do {
        cout << "\n========== STUDENT MANAGEMENT ==========\n";
        cout << "1. Add Student\n";
        cout << "2. Show All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Choose option: ";
        cin >> option;

        if (option == 1)
            add();
        else if (option == 2)
            showAll();
        else if (option == 3)
            search();
        else if (option == 4)
            update();
        else if (option == 5)
            removeStudent();
        else if (option == 6)
            cout << "Program ended.\n";
        else
            cout << "Wrong choice!\n";

    } while (option != 6);

    return 0;
}

// Add student record
void add() {
    if (countStudents >= SIZE) {
        cout << "No more space to add students.\n";
        return;
    }

    cout << "\nEnter Roll Number: ";
    cin >> s[countStudents].roll;

    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, s[countStudents].name);

    cout << "Enter Marks: ";
    cin >> s[countStudents].marks;

    countStudents++;
    cout << "Student added.\n";
}

// Display all students
void showAll() {
    if (countStudents == 0) {
        cout << "No records found.\n";
        return;
    }

    cout << "\n---- Student Records ----\n";
    for (int i = 0; i < countStudents; i++) {
        cout << "Roll: " << s[i].roll
             << " | Name: " << s[i].name
             << " | Marks: " << s[i].marks << endl;
    }
}

// Search by roll number
void search() {
    int r;
    cout << "Enter roll number to search: ";
    cin >> r;

    bool found = false;

    for (int i = 0; i < countStudents; i++) {
        if (s[i].roll == r) {
            cout << "Record Found!\n";
            cout << "Name: " << s[i].name << endl;
            cout << "Marks: " << s[i].marks << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "No student with this roll number.\n";
}

// Update student data
void update() {
    int r;
    cout << "Enter roll number to update: ";
    cin >> r;

    for (int i = 0; i < countStudents; i++) {
        if (s[i].roll == r) {
            cin.ignore();
            cout << "Enter new name: ";
            getline(cin, s[i].name);

            cout << "Enter new marks: ";
            cin >> s[i].marks;

            cout << "Record updated.\n";
            return;
        }
    }

    cout << "Student not found.\n";
}

// Delete a student
void removeStudent() {
    int r;
    cout << "Enter roll number to delete: ";
    cin >> r;

    for (int i = 0; i < countStudents; i++) {
        if (s[i].roll == r) {
            for (int j = i; j < countStudents - 1; j++) {
                s[j] = s[j + 1];
            }
            countStudents--;
            cout << "Record deleted.\n";
            return;
        }
    }

    cout << "Student not found.\n";
}
