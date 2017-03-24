// name: number guessing game
// C++ for the impatient, Brian Overland
// 3/23/2017
// Author: John Pridmore

#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cin;
using std::cout;
using std::endl;

int main() {
      srand(time(NULL));       // Set random seed.
      bool play_more = true;
      int target = 0, n = 1, guess = 0, guessCnt = 0;

      while (play_more) {     // While play_more is true...
            cout << "enter a positive integer value of N" << endl;
            cin >> n;
            int target = 1 + rand() % n; // New target.
            cin.clear();
            while (true) {
                ++guessCnt;
                cout << "Guess the number, or 0 to quit: ";
                cin >> guess;
                if (cin == 0){
                    return -1;
                }
                if (guess == 0) {          // Time to quit.
                    play_more = false;
                    break;
                } else if (guess == target) {
                    cout << "CORRECT!!! Number is ";
                    cout << target << "! " << endl;
                    cout << "Let's play again!" << endl;
                    break;
                } else if (guess < target) {
                    cout << "Too low! Try again!" << endl;
                } else {
                    cout << "Too high! Try again!" << endl;
                }
            }  // End of inner while loop.
            cout << "It only took you " << guessCnt << " guesses," << endl;
            guessCnt = 0;
          
      }  // End of outer while loop.
      
      return 0;
}
