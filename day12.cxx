// left off at 1:47:15

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    bool isMale = true;
    bool isTall = true;

    if (isMale && isTall)
    {
        cout << "The person is male and tall" << endl;
    }
    else if (isMale && !isTall)
    {
        cout << "The person is male and short" << endl;
    }
    else if (!isMale && isTall)
    {
        cout << "The person is female and tall" << endl;
    }
    else
    {
        cout << "The person is female and short" << endl;
    }

    return 0;
}
