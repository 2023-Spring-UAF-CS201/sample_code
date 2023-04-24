#include <iostream>  // Provides access to std::cin and std::cout
#include <string>    // Provides access to std::string

using std::cin;      // Allows us to say cin instead of std::cin
using std::cout;     // Allows us to say cout instead of std::cout
using std::string;   // Allows us to say string instead of std::string

// Declare a function called main with a return type of int that takes no parameters
int main() {

  // Prints a message to the user (with no newline)
  cout << "Hello, what is your name? ";

  // Declares a new variable whose type is string, and sets its value to ""
  string name;

  // Reads a string from the user and copies that value into the name variable
  cin >> name;

  // Print the value of the name variable and then prints a newline
  cout << name << "\n";

  // This is a more verbose way to do the same thing
  cout << name;
  cout << "\n";

  // End the program by returning the value 0 to the operating system
  return 0;
}
