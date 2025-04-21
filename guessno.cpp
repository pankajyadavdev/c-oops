#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));  // Seed the random number generator with current time
    int secretNumber = rand() % 100 + 1; // Random number between 1 and 100
    int userGuess;
    int attempts = 0;

    cout << "🎯 Welcome to the Guess the Number Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100. Can you guess it?" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else if (userGuess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "🎉 Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        }
    } while (userGuess != secretNumber);

    return 0;
}
