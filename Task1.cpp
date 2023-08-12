//GUESS THE NUMBER GAME

#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int ran_num = rand() % 30 + 1;  // Generating a random number
    
    int guess_num;
    int attempt = 0;

    cout << "Welcome to 'Guessing the Number Game'" << endl; 
    cout << endl;

    do {
        cout << "Can you guess a number between 1 & 30: ";   // User enters the number
        cin >> guess_num;

        attempt = attempt + 1;   //increment attempt counter
        
        if (guess_num > ran_num) {
            cout << "You are too high!!" << endl;
        }
        else if (guess_num < ran_num) {
            cout << "You are too low!!" << endl;
        } 
        else {
            cout << "Bravo! You correctly guessed the number in " << attempt << " attempts!!" << endl;
        }
        } 
    while (guess_num != ran_num);
    
    return 0;
}
