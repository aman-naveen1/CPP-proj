#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    int rollNo;
    char name[50];
    float marks;

    void getData() {
        cout << "Enter Roll No, Name, and Marks: ";
        cin >> rollNo;
        cin.ignore();  // Ignore leftover newline
        cin.getline(name, 50);
        cin >> marks;
    }

    void displayData() {
        cout << "Roll No: " << rollNo << ", Name: " << name << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    fstream file;
    
    // Writing student data to file
    file.open("students.dat", ios::out | ios::binary);
    for (int i = 0; i < 2; i++) {  // Taking input for 2 students
        s.getData();
        file.write((char*)&s, sizeof(s));
    }
    file.close();
    
    // Reading and displaying student data from file
    file.open("students.dat", ios::in | ios::binary);
    cout << "\nStored Student Records:\n";
    while (file.read((char*)&s, sizeof(s))) {
        s.displayData();
    }
    file.close();
    
    return 0;
}