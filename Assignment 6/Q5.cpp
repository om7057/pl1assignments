#include<bits/stdc++.h>
template <typename T>
class Node {
public:
    T data;
    Node* next;

    Node(const T& data) : data(data), next(nullptr) {}
};

template <typename T>
class LinkedList {
private:
    Node<T>* head;
    int size;

public:
    LinkedList() : head(nullptr), size(0) {}

    void insert(const T& data) {
        Node<T>* newNode = new Node<T>(data);
        newNode->next = head;
        head = newNode;
        size++;
    }

    void remove(const T& data) {
        Node<T>* current = head;
        Node<T>* prev = nullptr;

        while (current != nullptr) {
            if (current->data == data) {
                if (prev == nullptr) {
                    head = current->next;
                } else {
                    prev->next = current->next;
                }
                delete current;
                size--;
                return;
            }
            prev = current;
            current = current->next;
        }
    }

    void display() {
        Node<T>* current = head;
        while (current != nullptr) {
            std::cout << current->data << std::endl;
            current = current->next;
        }
    }

    int getSize() const {
        return size;
    }

    ~LinkedList() {
        while (head != nullptr) {
            Node<T>* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

class Student {
public:
    int studentID;
    std::string studentName;
    double gpa;

    Student(int id, const std::string& name, double gpa)
        : studentID(id), studentName(name), gpa(gpa) {}

    friend std::ostream& operator<<(std::ostream& os, const Student& student) {
        os << "Student ID: " << student.studentID << ", Name: " << student.studentName << ", GPA: " << student.gpa;
        return os;
    }
};

class Course {
public:
    std::string courseCode;
    std::string courseName;
    std::string instructorName;

    Course(const std::string& code, const std::string& name, const std::string& instructor)
        : courseCode(code), courseName(name), instructorName(instructor) {}

    friend std::ostream& operator<<(std::ostream& os, const Course& course) {
        os << "Course Code: " << course.courseCode << ", Name: " << course.courseName
           << ", Instructor: " << course.instructorName;
        return os;
    }
};

int main() {
    LinkedList<Student> studentList;
    LinkedList<Course> courseList;
    int choice;

    while (true) {
        std::cout << "\nUniversity System Menu:\n";
        std::cout << "1. Add a student\n";
        std::cout << "2. Add a course\n";
        std::cout << "3. Display students\n";
        std::cout << "4. Display courses\n";
        std::cout << "5. Quit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                int id;
                std::string name;
                double gpa;

                try {
                    std::cout << "Enter student ID: ";
                    std::cin >> id;
                    if (std::cin.fail()) {
                        throw std::invalid_argument("Invalid input for student ID.");
                    }

                    std::cout << "Enter student name: ";
                    std::cin.ignore();
                    std::getline(std::cin, name);

                    std::cout << "Enter GPA: ";
                    std::cin >> gpa;
                    if (std::cin.fail()) {
                        throw std::invalid_argument("Invalid input for GPA.");
                    }

                    Student student(id, name, gpa);
                    studentList.insert(student);
                    std::cout << "Student added successfully." << std::endl;
                } catch (const std::invalid_argument& e) {
                    std::cerr << "Error: " << e.what() << std::endl;
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
                break;
            }

            case 2: {
                std::string code, name, instructor;
                std::cout << "Enter course code: ";
                std::cin >> code;

                std::cout << "Enter course name: ";
                std::cin.ignore();
                std::getline(std::cin, name);

                std::cout << "Enter instructor name: ";
                std::cin.ignore();
                std::getline(std::cin, instructor);

                Course course(code, name, instructor);
                courseList.insert(course);
                std::cout << "Course added successfully." << std::endl;
                break;
            }

            case 3:
                std::cout << "Students:\n";
                studentList.display();
                break;

            case 4:
                std::cout << "Courses:\n";
                courseList.display();
                break;

            case 5:
                std::cout << "Exiting the program." << std::endl;
                return 0;

            default:
                std::cerr << "Invalid choice. Please try again." << std::endl;
                break;
        }
    }

    return 0;
}
