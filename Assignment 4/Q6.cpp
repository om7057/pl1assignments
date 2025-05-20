#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class TelephoneEntry {
public:
    string name;
    int phoneNumber;

    TelephoneEntry(const string& _name, int _phoneNumber) : name(_name), phoneNumber(_phoneNumber) {}
};

int main() {
    
    TelephoneEntry john("John", 23456);
    TelephoneEntry ahmed("Ahmed", 9976);

   
    ofstream outputFile("telephone_numbers.txt");

    if (!outputFile) {
        cerr << "Error: Unable to create the file." << endl;
        return 1;
    }

    
    outputFile << john.name << " " << john.phoneNumber << endl;
    outputFile << ahmed.name << " " << ahmed.phoneNumber << endl;

    outputFile.close();

    cout << "Data file 'telephone_numbers.txt' created successfully." << endl;

    return 0;
}
