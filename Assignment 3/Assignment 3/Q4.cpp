#include <iostream>
using namespace std;

class Staff {
    int code;
    string name;

public:
    void StaffDetails(int c, string n) {
        code = c;
        name = n;
        cout << "The name of the staff member is: " << name << endl;
        cout << "The code of the staff member is: " << code << endl;
    }
};

class Education {
    string highestGeneralQualification;
    string highestProfessionalQualification;

public:
    void setQualifications(string generalQual, string professionalQual) {
        highestGeneralQualification = generalQual;
        highestProfessionalQualification = professionalQual;
    }

    void displayQualifications() {
        cout << "Highest General Qualification: " << highestGeneralQualification << endl;
        cout << "Highest Professional Qualification: " << highestProfessionalQualification << endl;
    }
};

class Teacher : public Staff, public Education {
    string subject;

public:
    void publishingSubject(string sub) {
        subject = sub;
        cout << "Subject of Teacher is: " << subject << endl;
    }
};

class Grade : public Staff, public Education {
    char Grade;

public:
    void grade(char g) {
        Grade = g;
        cout << "The grade of the officer is: " << Grade << endl;
    }
};

int main() {
    int code;
    string name, sub, generalQual, professionalQual;
    double speed, d;
    char c, var;

    cout << "Enter the details of the staff member:" << endl;
    cout << "Enter the name of the staff member: ";

    getline(cin, name);
    cout << "Enter the code of the staff member: ";
    cin >> code;
    
    
    Staff obj1;
    obj1.StaffDetails(code, name);

    cin.ignore(); 
    cout << "Enter the subject of the teacher: ";
    getline(cin, sub);

    Teacher obj2;
    obj2.publishingSubject(sub);

    cout << "Enter the highest general qualification of the teacher: ";
    getline(cin, generalQual);
    cout << "Enter the highest professional qualification of the teacher: ";
    getline(cin, professionalQual);
    obj2.setQualifications(generalQual, professionalQual);

    cout << "Enter the typing speed: ";
    cin >> speed;

    cout << "Enter the daily wage: ";
    cin >> d;

    cout << "Enter the type of the typist (Regular(R)/Casual(C)): ";
    cin >> var;

    cout << "Enter the grade of the Staff Member: ";
    cin >> c;

    Grade obj4;
    obj4.grade(c);

    cout << "Enter the highest general qualification of the officer: ";
    cin.ignore();
    getline(cin, generalQual);
    cout << "Enter the highest professional qualification of the officer: ";
    getline(cin, professionalQual);
    obj4.setQualifications(generalQual, professionalQual);


    cout << "\nEducational Qualifications of Teacher:" << endl;
    obj2.displayQualifications();

    cout << "\nEducational Qualifications of Officer:" << endl;
    obj4.displayQualifications();

    return 0;
}
