// DiceRolling.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>

using namespace std;

// variables for numbers
unsigned int diceOne;
unsigned int diceTwo;
unsigned int total;
unsigned int userNumber;
unsigned int rollNumber = 0;

void drawDice() {
    cout << " _____    _____" << endl;
    cout << "|     |  |     |" << endl;
    cout << "|  " << diceOne << "  |  |  " << diceTwo << "  |" << endl;
    cout << "|_____|  |_____|" << endl << endl;
}

int main()
{

    // makes random numbers good
    srand(time(0));

    // greeting
    cout << "Alright, you pick a number between 2 and 12. I'm going to" << endl;
    cout << "roll these two dice and we'll see how many rolls it takes" << endl;
    cout << "before the total of the two dice equal your number!" << endl << endl;

    // get number
    cout << "Okay, what've ya got: ";
    cin >> userNumber;

    // validate data
    while (userNumber < 2 || userNumber > 12) {
        cout << "Your number must be between 2 and 12: " << endl << endl;
        cin >> userNumber;
    }

    // do the stuff until match
    do {

        // roll dice and total
        diceOne = rand() % 6 + 1;
        diceTwo = rand() % 6 + 1;
        total = diceOne + diceTwo;
        rollNumber++;
        
        drawDice();

        // options for match or not
        if (total == userNumber) {
            cout << "HOLY COW!! LOOK AT THAT! I GOT IT!" << endl << endl;
            cout << "I got a " << userNumber << "! It only took " << rollNumber << " rolls!" << endl << endl;
        }
        else {
            cout << "Weellllp! That's not it. I rolled a " << diceOne << " and a " << diceTwo << "," << endl << endl;
            cout << "for a total of " << total << ". That was roll number " << rollNumber << "." << endl << endl;
        }


    // win criteria
    } while (total != userNumber);

    // just because
    return 0;
}
