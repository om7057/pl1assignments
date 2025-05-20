
#include <iostream>
#include <cstring>

using namespace std;

class String {
private:
    char* str;

public:
    
    String(const char* s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    String(const String&   t) {
        str = new char[strlen(  t.str) + 1];
        strcpy(str,   t.str);
    }

    
    ~String() {
        delete[] str;
    }

    
    String& operator=(const String&   t) {
        if (this == &  t) {
            return *this; 
        }

        delete[] str;

        str = new char[strlen(  t.str) + 1];
        strcpy(str,   t.str);

        return *this;
    }

    
    bool operator==(const String&   t) const {
        return (strcmp(str,   t.str) == 0);
    }

   
    void display() const {
        cout << str;
    }
};

int main() {
    char input1[100], input2[100];

    cout << "Enter the first string: ";
    cin.getline(input1, 100);

    cout << "Enter the second string: ";
    cin.getline(input2, 100);

    String s1(input1);
    String s2(input2);
    String s3 = s1;
    String s4;

    s4 = s2;

    cout << "s1: ";
    s1.display();
    cout << endl;

    cout << "s2: ";
    s2.display();
    cout << endl;

    cout << "s3: ";
    s3.display();
    cout << endl;

    cout << "s4: ";
    s4.display();
    cout << endl;

    if (s1 == s2) {
        cout << "s1 and s2 are equal." << endl;
    } else {
        cout << "s1 and s2 are not equal." << endl;
    }

    if (s2 == s4) {
        cout << "s2 and s4 are equal." << endl;
    } else {
        cout << "s2 and s4 are not equal." << endl;
    }

    return 0;
}
