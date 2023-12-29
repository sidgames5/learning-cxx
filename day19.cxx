// left off at 2:54:55

#include <iostream>

using namespace std;

int main()
{
    int grid[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cout << grid[x][y] << " ";
        }
        cout << endl;
    }

    return 0;
}
