/*
Author: Armaan Hajar
Date: 9/14/22
Program Description: This program is a simple guessing game where the program will generate a random number and you will try to guess the number. After you guess the number, you will be asked if you would like to play again
 */

// NO GLOBAL VARIABLES
// NO STRINGS
// INCLUDE IOSTREAM

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
  bool newgame = true;
  int guesses = 0;

  // if the user wants to play again, newgame will stay true. if the user does not want to play again, newgame wll become false and end the program
  while (newgame == true) {
    bool guessed = false;
    // random number generator
    srand(time(NULL));
    int randNum = rand() % 101;
    int input = 0;

    cout << "Start Guessing Numbers" << endl;

    // while loop will stay active until the number is guessed
    while (guessed == false) { 
      cin >> input;

      // output if guess is too high
      if (input > randNum) {
	cout << "Too High!" << endl;
	guesses++;
      }
      // output if guess is too low
      else if (input < randNum) {
	cout << "Too Low!" << endl;
	guesses++;
      }
      // output if number is guessed correctly
      if (input == randNum) {
	guesses++;
	cout << "Well Done, It Took You " << guesses << " Guesses to get The Answer!" << endl;

	char YorN;
	cout << "Do you want to play again? (Y/N)" << endl;
	cin >> YorN;

	// if user wants to play again, keep newgame true
	if (YorN == 'Y' || YorN == 'y') {
	  guesses = 0;
	  cout << "Starting New Game!" << endl;
	  newgame = true;
	  guessed = true;
	}
	// if user does not want to plau again, make newgame false
	else if (YorN == 'N' || YorN == 'n') {
	  cout << "Thank You For Playing!" << endl;
	  newgame = false;
	  guessed = true;
	}
      }
    }
  }
  return 0;
}
