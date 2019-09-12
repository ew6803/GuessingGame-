// Imports Neccesary Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main ()

{
  // Defines Variables
  cout << "Welcome to Guessing Game, Please Enter a Number Between 1 and 100. \n";
  int input = 0;
  char playAgain = '0';
  bool stillPlaying;
  int counter = 0; 
  stillPlaying = true;
  srand(time(NULL));
  int random = rand()%100;
  // Keeps Program Running Until User Does Not Want to Play Again 
  while (stillPlaying == true) {
    cin >> input;
    // Tells User if Guess is Too Low
    if (input < random) {
      cout << "Your Answer is Below the Correct Number \n";
      counter++;
    }
    // Tells User if Guess is Too High
    if (input > random) {
      cout << "Your Answer is Above the Correct Number \n";
      counter++;
    }
    // Tells User if Guess is Correct, Tells The Amount of Tries Taken
    // Asks if User Wants to Play Again, if Yes, Resets Random Number, If no, Ends Loop and Program
    if (input == random) 
      {
	counter++;
	cout << "Your Answer is Correct! It Took You ";
        cout << counter; 
	cout << " tries! Would You Like To Play Again? (y or n) \n";
	cin >> playAgain;
	if (playAgain == 'n' || playAgain == 'N') {
	  stillPlaying = false;
	  cout << "Thank You For Playing Guessing Game";
	}
	else {
	  counter = 0;
	  cout << "OK, Please Enter A Number Between 1 and 100. \n";
	  random = rand()%100; 
	}


      }
	

  }
  return 0;
}
