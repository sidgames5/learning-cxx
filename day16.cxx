// left off at 2:29:18

#include <iostream>

using namespace std;

int main()
{
    int answer = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while (answer != guess)
    {
        if (guessCount >= guessLimit)
        {
            outOfGuesses = true;
            break;
        }
        cout << "Enter a guess: ";
        cin >> guess;
        guessCount++;
    }

    if (outOfGuesses)
    {
        cout << "The number was " << answer << endl;
    }
    else
    {
        cout << "You win!" << endl;
    }

    return 0;
}
