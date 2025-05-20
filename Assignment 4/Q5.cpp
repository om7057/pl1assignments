#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string fileName;

    cout << "Enter the name of the file: ";
    cin >> fileName;

    ifstream inputFile(fileName);

    if (!inputFile) {
        cerr << "Error: Unable to open the file." << endl;
        return 1;
    }

    cout << left << setw(20) << "NAME" << "PHONE NUMBER" << endl;
    cout << "------------------------------------------" << endl;

    string name;
    int phoneNumber;

    while (inputFile >> name >> phoneNumber) {
        cout << left << setw(20) << name << right << setw(10) << phoneNumber << endl;
    }

    inputFile.close();

    return 0;
}
