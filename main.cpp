// ------------- FILE HEADER -------------
// Author ✅:
// Assignment ✅:
// Date ✅:
// Citations:

// ------------- CODE -------------
#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

// Function prototypes (if any)

// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main()
{
  const int PLAYER_COUNT = 3;
  float sum = 0.0;
  float average = 0.0;

  string player_a_name = "";
  int player_a_rocks = 0;

  string player_b_name = "";
  int player_b_rocks = 0;

  string player_c_name = "";
  int player_c_rocks = 0;

  cout << "Welcome to the Rock Collector Championships!" << endl;

  cout << "Enter player 1 name: ";
  getline(cin, player_a_name);

  cout << "How many rocks did Gordan Freeman collect? ";
  cin >>  player_a_rocks;
  // cin.get();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  // Test for less than zero
  // conditional message and set to zero
  // Invalid amount. 0 will be entered.

  // Repeat above patter for player b and c

  sum = sum + player_a_rocks;
  sum = sum + player_b_rocks;
  sum = sum + player_c_rocks;
  // Calculate and report places and average 

  cout << endl;
  cout << fixed << setprecision(2);
  cout << "The average number of rocks collected by the top three players is " << average << " rocks!" << endl;

  cout << endl;
  cout << "Congratulations Rock Collectors!" << endl;
  /*

Enter player 1 name: Gordan Freeman
How many rocks did Gordan Freeman collect? -9
Invalid amount. 0 will be entered.
Enter player 2 name: Link
How many rocks did Link collect? 45
Enter player 3 name: D. Va
How many rocks did D. Va collect? 45
Link and D. Va are tied for first place.
Gordan Freeman is in second place!


  */

  return 0;
}

// Function implementations (if any)

// ------------- DESIGN -------------
/*
Program Name:

Program Description:

Design:
A. INPUT
Define the input variables including name data type.

B. OUTPUT
Define the output variables including data types.

C. CALCULATIONS
float average = 0.0;
float sum = 0.0;
const int PLAYER_COUNT = 3;

average  = sum / PLAYER_COUNT;

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts.
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs.
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS

Welcome to the Rock Collector Championships!
Enter player 1 name: Gordan Freeman
How many rocks did Gordan Freeman collect? -9
Invalid amount. 0 will be entered.
Enter player 2 name: Link
How many rocks did Link collect? 45
Enter player 3 name: D. Va
How many rocks did D. Va collect? 45
Link and D. Va are tied for first place.
Gordan Freeman is in second place!
The average number of rocks collected by the top three players is 30.00 rocks!
Congratulations Rock Collectors!


Welcome to the Rock Collector Championships!
Enter player 1 name: Mario
How many rocks did Mario collect? 56
Enter player 2 name: Master Chief
How many rocks did Master Chief collect? 56
Enter player 3 name: Sonic
How many rocks did Sonic collect? 56
It is a three way tie!
The average number of rocks collected by the top three players is 56.00 rocks!
Congratulations Rock Collectors!


Welcome to the Rock Collector Championships!
Enter player 1 name: King Dedede
How many rocks did King Dedede collect? 57
Enter player 2 name: Samus
How many rocks did Samus collect? 102
Enter player 3 name: Kirby
How many rocks did Kirby collect? 62
Samus is in first place!
Kirby is in second place.
King Dedede is in third place.
The average number of rocks collected by the top three players is 73.67 rocks!
Congratulations Rock Collectors!
*/
