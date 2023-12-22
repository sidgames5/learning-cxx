// left off at 2:02:20

#include <iostream>

using namespace std;

int main()
{
    double x, y;
    char op;

    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter a number: ";
    cin >> y;

    if (op == '+')
    {
        cout << x + y << endl;
    }
    else if (op == '-')
    {
        cout << x - y << endl;
    }
    else if (op == '*')
    {
        cout << x * y << endl;
    }
    else if (op == '/')
    {
        cout << x / y << endl;
    }
    else
    {
        cout << "Invalid operator: " << op << endl;
    }

    return 0;
}
