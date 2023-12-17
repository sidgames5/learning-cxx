// left off at 1:05:32

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string name;
    int age;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    cout << name << " is " << age << " years old" << endl;

    return 0;
}