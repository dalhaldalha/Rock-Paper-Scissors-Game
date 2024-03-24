#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {

  char again = 'y';

  while (again == 'y' || again == 'Y') { // Begin of Loop to play again
  
  srand (time(NULL)); 
  char user_input;
  const char game_options[3] = {'R', 'P', 'S'};

  cout<<"WELCOME TO ROCK(R), PAPER(P), SCISSORS(S). PICK YOUR HAND...\n";
  cin >> user_input;

  char rand_letter = rand() % 3;
  char computer_input=game_options[rand_letter];
  cout <<computer_input<<endl;

// All possibilities for user picking Rock(R)
  if (user_input==game_options[0] && computer_input==game_options[0]) {
    cout <<"The Computer Picks Rock(R). It is a Tie!! \n";
  } else if (user_input==game_options[0] && computer_input==game_options[1]) {
    cout <<"The Computer picks Paper(P). You Lose!! \n";
  } else if (user_input==game_options[0] && computer_input==game_options[2]) {
    cout <<"The Computer picks Scissors(S). You Win!! \n";
// All possibilities for user picking Paper(P)
  } else if (user_input==game_options[1] && computer_input==game_options[0]) {
    cout <<"The Computer Picks Rock(R). You Win!! \n";
  } else if (user_input==game_options[1] && computer_input==game_options[1]) {
    cout <<"The Computer picks Paper(P). It is a Tie!! \n";
  } else if (user_input==game_options[1] && computer_input==game_options[2]) {
    cout <<"The Computer picks Scissors(S). You Lose!! \n";
// All possibilities for user picking Scissors(S)
  } else if (user_input==game_options[2] && computer_input==game_options[0]) {
    cout <<"The Computer Picks Rock(R). You Lose!! \n";
  } else if (user_input==game_options[2] && computer_input==game_options[1]) {
    cout <<"The Computer picks Paper(P). You Win!! \n";
  } else if (user_input==game_options[2] && computer_input==game_options[2]) {
    cout <<"The Computer picks Scissors(S). It is a Tie!! \n";
  } else {
    cout << "Wrong Input"; //If any other value is inputed other than the given ones, this will return.
  }
  
  cout << "Do you want to play again? (y/n)" << endl;
  cin >> again;

  } //End the loop

  cout << "Thanks for playing!";
  

  return 0;
}