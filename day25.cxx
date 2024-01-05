#include <iostream>

using namespace std;

class Person
{
public:
    string name;
};

class Student : public Person
{
private:
    string major;

public:
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
};

int main()
{
    Person person;
    person.name = "Sid";
    cout << person.name << endl;

    Student student;
    student.name = "Sid";
    cout << student.name << endl;

    return 0;
}
