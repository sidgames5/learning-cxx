// left off at 3:13:26

#include <iostream>

using namespace std;

int main()
{
    int age = 20;
    int *agePtr = &age;
    double gpa = 4.0;
    string name = "Sid";

    cout << *agePtr << endl;
    cout << &gpa << endl;
    cout << &name << endl;

    return 0;
}
