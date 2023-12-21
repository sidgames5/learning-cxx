// left off at 1:29:47

#include <iostream>
#include <cmath>

using namespace std;

void sayHi();

void print(string text)
{
    cout << text;
}

void println(string text)
{
    cout << text << endl;
}

int main()
{
    sayHi();

    print("Hello!");
    println("Hello on the same line!");
    print("Hello on a new line!");

    return 0;
}

void sayHi()
{
    cout << "Hello user" << endl;
}