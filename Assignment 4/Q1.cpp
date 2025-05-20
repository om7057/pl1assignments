#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

struct Item {
    string name;
    int code;
    double cost;
};

int main() {
    vector<Item> itemList;

    cout << "Enter item details (name, code, cost) or type 'exit' to finish:" << endl;

    while (true) {
        Item newItem;
        string input;

        cout << "Name: ";
        getline(cin, newItem.name);

        if (newItem.name == "exit") {
            break;
        }

        cout << "Code: ";
        cin >> newItem.code;

        cout << "Cost: ";
        cin >> newItem.cost;

        cin.ignore();

        itemList.push_back(newItem);
    }

    cout << left << setw(20) << "NAME" << setw(15) << "CODE" << setw(10) << "COST" << endl;

    for (const Item& item : itemList) {
        cout << left << setw(20) << item.name << setw(15) << item.code << fixed << setprecision(2) << right << setw(10) << item.cost << endl;
    }

    return 0;
}
