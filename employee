#include <iostream>  // For input and output (cin, cout)
using namespace std;

// **Base class: Person** (Common properties for students & employees)
class Person {
protected: // Protected members (can be accessed in child classes)
    string name; // Stores the name
    int age;     // Stores the age

public:
    void input() { 
        cout << "Enter name and age: "; 
        cin >> name >> age; 
    } // Takes user input for name and age

    void display() { 
        cout << "Name: " << name << ", Age: " << age << endl; 
    } // Displays name and age
};

// **Derived class: Student (inherits Person)**
class Student : public Person {
    string course; // Stores course name

public:
    void input() { 
        Person::input(); // Call input() from Person class
        cout << "Enter course: "; 
        cin >> course; 
    } // Takes user input for course

    void display() { 
        Person::display(); // Call display() from Person class
        cout << "Course: " << course << endl; 
    } // Displays course details
};

// **Derived class: Employee (inherits Person)**
class Employee : public Person {
    int salary; // Stores salary

public:
    void input() { 
        Person::input(); // Call input() from Person class
        cout << "Enter salary: "; 
        cin >> salary; 
    } // Takes user input for salary

    void display() { 
        Person::display(); // Call display() from Person class
        cout << "Salary: " << salary << endl; 
    } // Displays salary details
};

int main() {
    Student s;  // Create a Student object
    Employee e; // Create an Employee object

    cout << "Enter student details:\n"; 
    s.input();  // Take input for student

    cout << "Enter employee details:\n"; 
    e.input();  // Take input for employee

    cout << "\nStudent Details:\n"; 
    s.display(); // Show student details

    cout << "\nEmployee Details:\n"; 
    e.display(); // Show employee details

    return 0; // End program successfully
}
