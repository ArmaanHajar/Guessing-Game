#include <iostream>

using namespace std;

int main() {
  bool newgame = false;
  int guesses = 0;
  
  while (newgame == false) {
    bool guessed = false;
    int range = 100 - 0 + 1;
    int randNum = rand() % range + 0;
    int input = 0;

    cout << randNum << endl;

    cout << "Start Guessing Numbers" << endl;

    while (guessed == false) { 
      cin >> input;

      if (input > randNum) {
	cout << "Too High!" << endl;
	guesses++;
      }

      else if (input < randNum) {
	cout << "Too Low!" << endl;
	guesses++;
      }
    
      if (input == randNum) {
	guesses++;
	cout << "Well Done, It Took You " << guesses << " Guesses to get The Answer!" << endl;

	char YorN;
	cout << "Do you want to play again? (Y/N)" << endl;
	cin >> YorN;

	if (YorN == 'Y') {
	  guesses = 0;
	  cout << "Starting New Game!" << endl;
	  guessed = true;
	}
	if (YorN == 'N') {
	  cout << "Thank You For Playing!" << endl;
	  newgame = true;
	  guessed = true;
	}
      }
    }
    return 0;
  }
}
