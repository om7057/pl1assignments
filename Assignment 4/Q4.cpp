#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string inputFileName, outputFileName;
    
    cout << "Enter the name of the input file: ";
    cin >> inputFileName;
    
    cout << "Enter the name of the output file: ";
    cin >> outputFileName;

    ifstream inputFile(inputFileName);
    if (!inputFile) {
        cerr << "Error: Unable to open input file." << endl;
        return 1;
    }

    ofstream outputFile(outputFileName);
    if (!outputFile) {
        cerr << "Error: Unable to create output file." << endl;
        return 1;
    }

    char prevChar = '\0'; 

    char currentChar;
    while (inputFile.get(currentChar)) {
        if (!(prevChar == ' ' && currentChar == ' ')) {
            outputFile.put(currentChar);
        }
        prevChar = currentChar;
    }

    inputFile.close();
    outputFile.close();

    cout << "File transformation complete." << endl;

    return 0;
}
