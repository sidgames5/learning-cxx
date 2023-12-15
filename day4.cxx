// left off at 49:00

#include <iostream>

using namespace std;

int main()
{
    string phrase = "a string";
    cout << "Hello!";
    cout << "This is on the same line" << endl;
    cout << phrase << endl;
    cout << phrase.length() << endl;
    cout << phrase[2] << endl;
    phrase[0] = 'e';
    cout << phrase << endl;
    cout << phrase.find("string", 0) << endl;
    cout << phrase.substr(2) << endl;

    return 0;
}