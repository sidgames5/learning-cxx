// left off at 2:18:53

#include <iostream>

using namespace std;

int main()
{
    int index = 6;

    while (index <= 5)
    {
        cout << index << endl;
        index++;
    }

    do
    {
        cout << index << endl;
        index++;
    } while (index <= 5);

    return 0;
}
