#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

class TelephoneEntry {
public:
    string name;
    int phoneNumber;

    TelephoneEntry(const string& _name, int _phoneNumber) : name(_name), phoneNumber(_phoneNumber) {}
};


void readTelephoneEntries(map<string, TelephoneEntry>& phoneBook) {
    ifstream inputFile("telephone_numbers.txt");

    if (!inputFile) {
        cerr << "Error: Unable to open the file." << endl;
        exit(1);
    }

    string name;
    int phoneNumber;

    while (inputFile >> name >> phoneNumber) {
        phoneBook[name] = TelephoneEntry(name, phoneNumber);
    }

    inputFile.close();
}


void updatePhoneNumber(const string& name, int newPhoneNumber, map<string, TelephoneEntry>& phoneBook) {
    phoneBook[name].phoneNumber = newPhoneNumber;

    
    ofstream outputFile("telephone_numbers.txt");

    if (!outputFile) {
        cerr << "Error: Unable to open the file for writing." << endl;
        exit(1);
    }

    for (const auto& entry : phoneBook) {
        outputFile << entry.second.name << " " << entry.second.phoneNumber << endl;
    }

    outputFile.close();
}

int main() {
    map<string, TelephoneEntry> phoneBook;
    readTelephoneEntries(phoneBook);

    int choice;
    string name;
    int phoneNumber;

    while (true) {
        cout << "Menu:\n";
        cout << "1. Determine telephone number of a person\n";
        cout << "2. Determine name if telephone number is known\n";
        cout << "3. Update telephone number\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the name: ";
                cin >> name;
                if (phoneBook.find(name) != phoneBook.end()) {
                    cout << "Telephone number of " << name << ": " << phoneBook[name].phoneNumber << endl;
                } else {
                    cout << "Person not found in the phone book." << endl;
                }
                break;

            case 2:
                cout << "Enter the telephone number: ";
                cin >> phoneNumber;
                bool found = false;
                for (auto it = phoneBook.begin(); it != phoneBook.end(); ++it) {
                    if (it->second.phoneNumber == phoneNumber) {
                        cout << "Name with telephone number " << phoneNumber << ": " << it->second.name << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Telephone number not found in the phone book." << endl;
                }
                break;

            case 3:
                cout << "Enter the name for updating the telephone number: ";
                cin >> name;
                cout << "Enter the new telephone number: ";
                cin >> phoneNumber;
                if (phoneBook.find(name) != phoneBook.end()) {
                    updatePhoneNumber(name, phoneNumber, phoneBook);
                    cout << "Telephone number updated successfully." << endl;
                } else {
                    cout << "Person not found in the phone book." << endl;
                }
                break;

            case 4:
                cout << "Exiting the program." << endl;
                return 0;

            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    }

    return 0;
}
