#include <iostream>
using namespace std;

class Date
{
private:
    int day, month, year;

public:
    Date()
    {
        cout << "Initial Date: 1/1/1970" << endl;
    }
    Date(int iday, int imonth, int iyear)
    {
        day = iday;
        month = imonth;
        year = iyear;
    }
    void display()
    {
        cout <<"Input Date: "<< day << "/" << month << "/" << year << endl;
    }
};

int main()
{
    int day, month, year;
    cout << "Enter the day: " << endl;
    cin >> day;
    cout << "Enter the month: " << endl;
    cin >> month;
    cout << "Enter the year: " << endl;
    cin >> year;
    Date object;
    Date object1(day, month, year);
    object1.display();
    return 0;
}