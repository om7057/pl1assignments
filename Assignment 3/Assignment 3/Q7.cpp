#include<iostream>
using namespace std;

class INTEGER {
private:
    float x;

public:
    INTEGER(float ix) {
        x = ix;
    }

    INTEGER operator+(const INTEGER &t) {
        return INTEGER(x + t.x);
    }

    INTEGER operator-(const INTEGER &t) {
        return INTEGER(x - t.x);
    }

    INTEGER operator*(const INTEGER &t) {
        return INTEGER(x * t.x);
    }

    INTEGER operator/(const INTEGER &t) {
        if (t.x != 0) {
            return INTEGER(x / t.x);
        } else {
            cout << "Can't be divided by zero!\n";
            return INTEGER(0);
        }
    }

    friend ostream& operator<<(ostream &os, const INTEGER &i) {
        os << i.x;
        return os;
    }
};

int main() {
    float num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    INTEGER integer1(num1);
    INTEGER integer2(num2);

    INTEGER sum = integer1 + integer2;
    INTEGER diff = integer1 - integer2;
    INTEGER product = integer1 * integer2;
    INTEGER quotient = integer1 / integer2;

    cout << "integer1: " << integer1 << endl;
    cout << "integer2: " << integer2 << endl;
    cout << "integer1 + integer2: " << sum << endl;
    cout << "integer1 - integer2: " << diff << endl;
    cout << "integer1 * integer2: " << product << endl;
    cout << "integer1 / integer2: " << quotient << endl;

    return 0;
}
