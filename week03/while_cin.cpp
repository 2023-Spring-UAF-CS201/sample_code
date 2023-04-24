#include <iostream>

using std::cin;


int main() {

  string word;

  // The code inside the parentheses is called the condition of the while loop.
  //
  // The loop begins by running the condition.
  //
  // Here, the condition is cin >> word
  //
  // If the user entered a value, this condition will be true.
  // If the user didn't enter a value, this condition will be false.
  while (cin >> word) {

    // If the condition evaluated to true, then the body of the loop runs once
    cout << "You entered the word " << word << "\n";

    // When we reach the end of the body of the loop, the condition is checked again
  }
  
  return 0;
}
