#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person
{
private:
    int age, ID;
    string name;

public:
    Person()
    {
        name = "";
        age = 0;
        ID = 0;
    }
    Person(string &ipname, int ipid, int ipage) : name(ipname), ID(ipid), age(ipage){};
    virtual void display()
    {
        cout << "Name is : " << name << endl
             << "ID : " << ID << " Age : " << age << endl;
    }
    void modify(string &name_to_modify, int age_to_modify)
    {
        name = name_to_modify;
        age = age_to_modify;
    }
};

class Student : public Person
{
private:
    string major;
    float cgpa;
    vector<string> regcourses;

public:
    Student(string ipname, int ipid, int ipage, string ipmajor) : Person(ipname, ipid, ipage), major(ipmajor){};
    void set_cgpa()
    {
        cout << "Enter CGPA of Student : ";
        cin >> cgpa;
    }
    void display()
    {
        Person::display();
        cout << "Major is : " << major << endl
             << "CGPA : " << cgpa << endl;
    }
    void modify(string &name_to_modify, int age_to_modify)
    {
        Person::modify(name_to_modify, age_to_modify);
    }
    void view_courses()
    {
        cout << "Student is registered for Courses : " << endl;
        for (auto it : regcourses)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    void add_courses()
    {
        int temp;
        string course;
        cout << "Enter Number of Courses to be added : ";
        cin >> temp;
        for (int i = 0; i < temp; i++)
        {
            cin >> course;
            regcourses.push_back(course);
        }
    }
    void academic_standing()
    {
        cout << "Student's Academic Standing : ";
        if (cgpa <= 4)
            cout << "Poor" << endl;
        else if (cgpa > 4 && cgpa < 7.5)
            cout << "Good" << endl;
        else if (cgpa >= 7.5 && cgpa <= 10)
            cout << "Excellent" << endl;
    }
};

class Professor : public Person
{
private:
    string department;
    vector<string> courses;

public:
    Professor(string ipname, int ipid, int ipage, string ipdep) : Person(ipname, ipid, ipage), department(ipdep){};
    void display()
    {
        Person::display();
        cout << "Department is : " << department << endl;
    }
    void addcourse(string course_to_add)
    {
        courses.push_back(course_to_add);
    }
    void course_info()
    {
        cout << "Courses taught by teacher are : " << endl;
        for (auto it : courses)
        {
            cout << it << " ";
        }
    }
};

class AdminStaff : public Person
{
private:
    string job;

public:
    AdminStaff(string ipname, int ipid, int ipage, string ipjob) : Person(ipname, ipid, ipage), job(ipjob){};
    void display()
    {
        Person::display();
        cout << "Job Title is : " << job << endl;
    }
    void announcement()
    {
        cout << "Announcement" << endl;
    }
    void meetsummary()
    {
        cout << "Summary of the meet." << endl;
    }
};

class University : public Person
{
private:
    vector<Person> Person_info;

public:
    void addPerson(Person &personobj)
    {
        Person_info.push_back(personobj);
    }
    void display_info()
    {
        Person::display();
    }
};
int main()
{
    string name, major, dep, job;
    int id, age;
    cout << "Enter Name of Student : ";
    cin >> name;
    cout << "Enter ID of Student : ";
    cin >> id;
    cout << "Enter Age of Student : ";
    cin >> age;
    cout << "Enter Major of Student : ";
    cin >> major;
    cout << endl;
    Student s(name, id, age, major);
    s.set_cgpa();
    s.display();
    s.add_courses();
    s.view_courses();
    s.academic_standing();
    cout << endl;

    cout << "Enter Name of Professor : ";
    cin >> name;
    cout << "Enter ID of Professor : ";
    cin >> id;
    cout << "Enter Age of Professor : ";
    cin >> age;
    cout << "Enter Department of Professor : ";
    cin >> dep;
    cout << endl;
    Professor p(name, id, age, dep);
    p.addcourse("Engineering Mathematics");
    p.display();
    p.course_info();
    cout << endl;

    cout << "Enter Name of Staff Member : ";
    cin >> name;
    cout << "Enter ID of Staff Member : ";
    cin >> id;
    cout << "Enter Age of Staff Member : ";
    cin >> age;
    cout << "Enter Job Title of Staff Member : ";
    cin >> job;
    cout << endl;
    AdminStaff a(name, id, age, job);
    a.display();
    a.announcement();
    a.meetsummary();
    cout << endl;

    return 0;
}
