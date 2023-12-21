// left off at 1:20:03

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int numbers[] = {2, 4, 8, 16};

    cout << numbers[0] << endl;
    numbers[0] = 3;
    cout << numbers[0] << endl;

    int moreNumbers[20];
    moreNumbers[0] = 100;
    cout << moreNumbers[0] << endl;

    return 0;
}