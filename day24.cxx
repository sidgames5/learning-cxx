// left off at 3:54:04

#include <iostream>

using namespace std;

class Student
{
private:
    string major;

public:
    string name;
    double gpa;

    void setMajor(string amajor)
    {
        if (amajor == "Math" || amajor == "English" || amajor == "Chemistry" || amajor == "Biology")
        {
            major = amajor;
        }
        else
        {
            cout << "Invalid major: " << amajor << endl;
        }
    }

    string getMajor()
    {
        return major;
    }

    Student(string aname, string amajor, double agpa)
    {
        name = aname;
        setMajor(amajor);
        gpa = agpa;
    }
};

int main()
{
    Student student("Jim", "Math", 3.4);

    cout << student.getMajor() << endl;
    student.setMajor("fdsfsd");
    cout << student.getMajor() << endl;
    student.setMajor("Chemistry");
    cout << student.getMajor() << endl;

    return 0;
}
