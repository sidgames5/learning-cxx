// left off at 2:45:21

#include <iostream>

using namespace std;

int power(int b, int e)
{
    int result = 1;

    for (int i = 0; i < e; i++)
    {
        result = result * b;
    }

    return result;
}

int main()
{
    cout << power(2, 16) << endl;

    return 0;
}
