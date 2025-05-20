#include <iostream>
#include <vector>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person() {
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
    }

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
protected:
    int studentID;

public:
    Student() : Person() {
        cout << "Enter student ID: ";
        cin >> studentID;
    }

    void displayInfo() {
        Person::displayInfo();
        cout << "Student ID: " << studentID << endl;
    }
};

class Professor : public Person {
protected:
    string department;

public:
    Professor() : Person() {
        cout << "Enter department: ";
        
        getline(cin, department);
    }

    void displayInfo() {
        Person::displayInfo();
        cout << "Department: " << department << endl;
    }
};

class RegisteredStudent : public Student {
private:
    vector<string> courses;

public:
    RegisteredStudent() : Student() {}

    void addCourse(string course) {
        courses.push_back(course);
    }

    void displayInfo() {
        Student::displayInfo();
        cout << "Courses Registered: " << endl;
        for (string course : courses) {
            cout << "- " << course << endl;
        }
    }
};

int main() {
    Student student;
    Professor professor;
    RegisteredStudent registeredStudent;

    string course;
    cout << "Enter courses for registered student (enter 'done' to finish):" << endl;
    while (true) {
        cout << "Enter course: ";
        cin.ignore();
        getline(cin, course);
        if (course == "done") {
            break;
        }
        registeredStudent.addCourse(course);
    }

    cout << "Student Information:" << endl;
    student.displayInfo();
    cout << "------------------------" << endl;

    cout << "Professor Information:" << endl;
    professor.displayInfo();
    cout << "------------------------" << endl;

    cout << "Registered Student Information:" << endl;
    registeredStudent.displayInfo();
    cout << "------------------------" << endl;

    return 0;
}
