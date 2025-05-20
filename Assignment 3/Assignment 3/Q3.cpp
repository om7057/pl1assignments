// #include <iostream>

// using namespace std;
// class Staff
// {
//     int code;
//     string name;

// public:
//     void StaffDetails(int c, string n)
//     {
//         code = c;
//         name = n;
//         cout << "The name of the staff member is: \n"
//              << name;
//         cout << "The code of the staff member is: \n"
//              << code;
//     }
// };

// class Teacher : public Staff
// {
//     string subject;

// public:
//     void publishingSubject(string sub)
//     {
//         subject = sub;
//         cout << "Subject of Teacher is: \n"
//              << subject << endl;
//     }
// };

// class Typist : public Staff
// {
//     double Typespeed;

// public:
//     void speed(double speed)
//     {
//         Typespeed = speed;
//         cout << "The typing speed of the typist is: \n"
//              << Typespeed << endl;
//     }
// };

// class Grade : public Staff
// {
//     char Grade;

// public:
//     void grade(char g)
//     {
//         Grade = g;
//         cout << "The grade of the officer is: \n"
//              << Grade << endl;
//     }
// };

// class Regular : public Typist
// {
// public:
//     Regular()
//     {
//         cout << "The type speed of the typist is regular." << endl;
//     }
// };

// class Casual : public Typist
// {
//     double dw;

// public:
//     void dw(double d)
//     {
//         dw = d;
//         cout << "The daily wage of the typist with casual speed are: \n"
//              << dw << endl;
//     }
// };

// int main()
// {
//     int code;
//     string name, sub;
//     double speed, d;
//     char c, var;

//     cout << "Enter the details of the staff member:\n";
//     cout << "Enter the name of the staff member:\n";
//     cin.ignore();
//     getline(cin, name);
//     cout << "Enter the code of the staff member:\n";
//     cin >> code;
//     Staff obj1;
//     obj1.StaffDetails(code, name);

//     cout << "Enter the subject of the teacher:\n";
//     getline(cin, sub);
//     Teacher obj2;
//     obj2.publishingSubject(sub);

//     cout << "Enter the typing speed: ";
//     cin >> speed;

//     cout << "Enter the daily wage: ";
//     cin >> d;

//     cout << "Enter the type of the typist(Regular(R)/Casual(C)):\n";
//     cin >> var;
//     Typist obj3;
//     obj3.speed(speed);
//     {
//         if (var == 'c')
//         {
//             Regular obj5;
//             obj5.speed(speed);
//         }
//         else
//         {
//             Casual obj6;
//             obj6.speed(speed);
//             obj6.dw(d);
//         }
//     }

//     cout << "Enter the grade of the Staff Member:\n";
//     cin >> c;
//     Grade obj4;
//     obj4.grade(c);

//     return 0;
// }

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

class Teacher : public Staff {
    string subject;

public:
    void publishingSubject(string sub) {
        subject = sub;
        cout << "Subject of Teacher is: " << subject << endl;
    }
};

class Typist : public Staff {
    double Typespeed;

public:
    void speed(double spd) {
        Typespeed = spd;
        cout << "The typing speed of the typist is: " << Typespeed << endl;
    }
};

class Grade : public Staff {
    char Grade;

public:
    void grade(char g) {
        Grade = g;
        cout << "The grade of the officer is: " << Grade << endl;
    }
};

class Regular : public Typist {
public:
    Regular() {
        cout << "The type speed of the typist is regular." << endl;
    }
};

class Casual : public Typist {
    double dw;

public:
    void sdw(double d) {
        dw = d;
    }

    void displayDailyWage() {
        cout << "The daily wage of the typist with casual speed is: " << dw << endl;
    }
};

int main() {
    int code;
    string name, sub;
    double speed, d;
    char c, var;

    cout << "Enter the details of the staff member:" << endl;
    cout << "Enter the name of the staff member: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter the code of the staff member: ";
    cin >> code;

    Staff obj1;
    obj1.StaffDetails(code, name);

    cin.ignore(); // Clear newline from previous input

    cout << "Enter the subject of the teacher: ";
    getline(cin, sub);

    Teacher obj2;
    obj2.publishingSubject(sub);

    cout << "Enter the typing speed: ";
    cin >> speed;

    cout << "Enter the daily wage: ";
    cin >> d;

    cout << "Enter the type of the typist (Regular(R)/Casual(C)): ";
    cin >> var;

    Typist obj3;
    obj3.speed(speed);

    if (var == 'C') {
        Regular obj5;
        obj5.speed(speed);
    } else if(var=='R') {
        Casual obj6;
        obj6.speed(speed);
        obj6.sdw(d);
    }

    cout << "Enter the grade of the Staff Member: ";
    cin >> c;

    Grade obj4;
    obj4.grade(c);

    return 0;
}
