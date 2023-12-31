// left off at 3:25:40

#include <iostream>

using namespace std;

class Course
{
public:
    string name;
    string teacher;
    string students[20];
    int period;
    string assignments[1000];
};

int main()
{
    Course science;
    science.name = "Science";
    science.teacher = "Mr. White";
    science.students[0] = "Sid";
    science.period = 2;
    science.assignments[0] = "Study elements";

    cout << science.name << endl;

    return 0;
}
