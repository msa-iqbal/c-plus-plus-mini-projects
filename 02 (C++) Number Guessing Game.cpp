/*  Project Name: Number Guessing Game
    Features:
    - Random number generation
    - Guessing until correct
*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
    srand(time(0));
    int num = rand() % 100 + 1;
    int guess;

    cout << "Guess a number between 1 and 100: ";
    do {
        cin >> guess;
        if (guess > num) cout << "Too high! Try again: ";
        else if (guess < num) cout << "Too low! Try again: ";
    } while (guess != num);

    cout << "Correct! You guessed it.";
    return 0;
}

/*  Output:
    Guess a number between 1 and 100: 45
    Too high! Try again: 30
    Too low! Try again: 37
    Correct! You guessed it.
*/