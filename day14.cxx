// left off at 2:10:47

#include <iostream>

using namespace std;

string getDayOfWeek(int day)
{
    switch (day)
    {
    case 0:
        return "Sunday";
    case 1:
        return "Monday";
    case 2:
        return "Tuesday";
    case 3:
        return "Wednesday";
    case 4:
        return "Thursday";
    case 5:
        return "Friday";
    case 6:
        return "Saturday";
    default:
        return "Invalid";
    }
}

int main()
{
    cout << getDayOfWeek(0) << endl;
    cout << getDayOfWeek(1) << endl;
    cout << getDayOfWeek(2) << endl;
    cout << getDayOfWeek(3) << endl;
    cout << getDayOfWeek(4) << endl;
    cout << getDayOfWeek(5) << endl;
    cout << getDayOfWeek(6) << endl;

    return 0;
}
