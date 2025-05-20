#include <iostream>
#include <string>

using namespace std;

class EmailFormatException : public exception {
public:
    const char* what() const noexcept {
        return "Error: Invalid email format. Missing '@' symbol.";
    }
};

int main() {
    string email;

    try {
        cout << "Enter an email address: ";
        cin >> email;

        try {
            if (email.find('@') == string::npos) {
                throw EmailFormatException();
            }
            cout << "Email address: " << email << endl;
        } catch (const EmailFormatException &e) {
            cerr << e.what() << endl;
        }
    } catch (ios_base::failure &e) {
        cerr << "Error: Invalid input. Please enter a valid email address." << endl;
    }

    return 0;
}
