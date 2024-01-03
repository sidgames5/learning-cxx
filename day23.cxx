// left off at 3:41:43

#include <iostream>

using namespace std;

class Student
{
public:
    string name;
    string major;
    double gpa;
    Student(string aname, string amajor, double agpa)
    {
        name = aname;
        major = amajor;
        gpa = agpa;
    }

    bool isHonorStudent()
    {
        if (gpa >= 3.5)
            return true;
        return false;
    }
};

int main()
{
    Student student1("Jim", "Business", 2.4);
    Student student2("Bob", "Art", 3.6);

    cout << student1.isHonorStudent() << endl;
    cout << student2.isHonorStudent() << endl;

    return 0;
}
