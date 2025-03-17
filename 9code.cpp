#include <iostream> // This lets us use input and output (cin and cout)
using namespace std; // So we don't have to write std:: before cout and cin

// A class that represents a person
class Person {
protected: // These variables can be used in this class and any class that inherits from it
    string name; // This will store the person's name
    int age; // This will store the person's age

public:
    // This function asks the user to enter their name and age
    void input() { 
        cout << "Enter name and age: "; 
        cin >> name >> age; // Takes input for name and age
    }

    // This function prints the person's name and age
    void display() { 
        cout << "Name: " << name << ", Age: " << age << endl; 
    }
};

// A class that represents a student, which is also a type of person
class Student : public Person { // Student "inherits" from Person (like a child class)
    string course; // This will store the student's course

public:
    // This function asks for student details
    void input() { 
        Person::input(); // First, get the name and age from the Person class
        cout << "Enter course: "; 
        cin >> course; // Then, take input for the course
    }

    // This function prints student details
    void display() { 
        Person::display(); // First, print the name and age from the Person class
        cout << "Course: " << course << endl; // Then, print the course
    }
};

// A class that represents an employee, which is also a type of person
class Employee : public Person { // Employee "inherits" from Person
    int salary; // This will store the employee's salary

public:
    // This function asks for employee details
    void input() { 
        Person::input(); // First, get the name and age from the Person class
        cout << "Enter salary: "; 
        cin >> salary; // Then, take input for salary
    }

    // This function prints employee details
    void display() { 
        Person::display(); // First, print the name and age from the Person class
        cout << "Salary: " << salary << endl; // Then, print the salary
    }
};

int main() {
    Student s; // Create a Student object
    Employee e; // Create an Employee object

    // Ask the user to enter details for the student
    cout << "Enter student details:\n"; 
    s.input(); 

    // Ask the user to enter details for the employee
    cout << "Enter employee details:\n"; 
    e.input(); 

    // Show the details of the student
    cout << "\nStudent Details:\n"; 
    s.display(); 

    // Show the details of the employee
    cout << "\nEmployee Details:\n"; 
    e.display(); 

    return 0; // End the program successfully
}
