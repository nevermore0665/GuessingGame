#include <iostream>
using namespace std;                                                             // so I dont have to call on it everytime

int main() {
  srand(time(0));
  int randomNum = 1+ rand() % 10;                                               // had a problem with rand() giving zero , this was an easy fix to add 1 without getting to 11
  int guessNum;                                                                                                               
  // cout << randomNum; for testing   
  // cout << endl;
  cout << "Guess  the random number generated between 1 and 10: ";
  cin >> guessNum;
  while ( randomNum != guessNum){                                             // while only loops if true so i put while does not equal do this
    if (randomNum > guessNum){                                                // based on your suggestion prints to high or to low to help zero in on the number
      cout << "your number is too low, guess again: ";
    cin >> guessNum;}

    else {
      cout << "your number is too high, guess again: " ;
      cin >> guessNum;                                                        // re assigns the variable guessNum in the loop to allow updated input. Not sure if good practice or not.
    }
    }
  if (randomNum = guessNum){                                                 // you can loose the if statment for when the conditions are false to exit the while loop randomNum= guessNum but it felt safer to include it.

    cout<< "You guessed correct! The number was " << randomNum;
  }
  cout << endl << endl;                                                                      //  a break between part 1 and 2
  string password = "incorrectly";                                                           // two string variables to be used later
  string guessPassword ;
  cout << "I have devised a riddle to let you in, guess it and you may proceed."<< endl;
  cout << "No capital letters are included" << endl;
  cout << "Which word in the dictionary is spelled incorrectly? "<< endl;                    // cheesy intro
  cin >> guessPassword ;
  while (password != guessPassword){                                                         // didnt see the need for a do while so just used the same while not equal to logic
    
    cout << endl << "Try again :";
    cin >> guessPassword;
  }
  cout << endl;
  cout << "You have solved a cheeesy riddle, you may enter... ";                             // tried the other way this time with no if true statement. if it exits the while loop they are the same string.
return 0;
}