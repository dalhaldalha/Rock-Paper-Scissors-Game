#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {

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
    cout <<"The Computer Picks Rock(R). It is a Tie!!";
  } else if (user_input==game_options[0] && computer_input==game_options[1]) {
    cout <<"The Computer picks Paper(P). You Lose!!";
  } else if (user_input==game_options[0] && computer_input==game_options[2]) {
    cout <<"The Computer picks Scissors(S). You Win!!";
// All possibilities for user picking Paper(P)
  } else if (user_input==game_options[1] && computer_input==game_options[0]) {
    cout <<"The Computer Picks Rock(R). You Win!!";
  } else if (user_input==game_options[1] && computer_input==game_options[1]) {
    cout <<"The Computer picks Paper(P). It is a Tie!!";
  } else if (user_input==game_options[1] && computer_input==game_options[2]) {
    cout <<"The Computer picks Scissors(S). You Lose!!";
// All possibilities for user picking Scissors(S)
  } else if (user_input==game_options[2] && computer_input==game_options[0]) {
    cout <<"The Computer Picks Rock(R). You Lose!!";
  } else if (user_input==game_options[2] && computer_input==game_options[1]) {
    cout <<"The Computer picks Paper(P). You Win!!";
  } else if (user_input==game_options[2] && computer_input==game_options[2]) {
    cout <<"The Computer picks Scissors(S). It is a Tie!!";
  } else {
    cout << "Wrong Input"; //If any other value is inputed other than the given ones, this will return.
  }

  return 0;
}
