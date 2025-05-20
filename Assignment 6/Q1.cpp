#include <iostream>

using namespace std;

int main()
{
    double num1, num2;
    char op;

    try
    {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        cout << "Enter an operator (+, -, *, /): ";
        cin >> op;

        try
        {
            if (op == '+')
            {
                cout << "Result: " << num1 + num2 << endl;
            }
            else if (op == '-')
            {
                cout << "Result: " << num1 - num2 << endl;
            }
            else if (op == '*')
            {
                cout << "Result: " << num1 * num2 << endl;
            }
            else if (op == '/')
            {
                if (num2 == 0)
                {
                    throw "Division by zero error";
                }
                cout << "Result: " << num1 / num2 << endl;
            }
            else
            {
                throw "Invalid operator error";
            }
        }
        catch (const char *error)
        {
            cerr << "Error: " << error << endl;
        }
    }
    catch (ios_base::failure &e)
    {
        cerr << "Error: Invalid input. Please enter valid numbers." << endl;
    }

    return 0;
}
