#include <iostream>
#include <string>
#include <fstream>
#include <iomanip> 

using namespace std;

int main() {
    string text;
    int lineCount = 0;
    int wordCount = 0;
    int charCount = 0;

    cout << "Enter text. Press Ctrl+D (Linux/Mac) or Ctrl+Z (Windows) then Enter to end input:" << endl;

    while (getline(cin, text)) {
        lineCount++;
        charCount += text.length();

        stringstream ss(text);
        string word;
        while (ss >> word) {
            wordCount++;
        }
    }

    cout << left << "Number of lines:" << right << setw(10) << lineCount << endl;
    cout << left << "Number of words:" << right << setw(10) << wordCount << endl;
    cout << left << "Number of characters:" << right << setw(10) << charCount << endl;

    return 0;
}
