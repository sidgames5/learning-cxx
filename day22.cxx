// left off at 3:34:41

#include <iostream>

using namespace std;

class Course
{
public:
    string name;
    string teacher;
    int period;

    Course()
    {
        name = "Untitled";
        teacher = "No Teacher";
        period = 0;
    }

    Course(string aname, string ateacher, int aperiod)
    {
        name = aname;
        teacher = ateacher;
        period = aperiod;
    }
};

int main()
{
    Course science("Science", "Mr. White", 2);
    cout << science.name << endl;

    Course english;
    cout << english.name << endl;

    return 0;
}
