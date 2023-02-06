#include <iostream>  // This makes std::cin, std::cout, and std::endl available

using std::cin;   // This allows us to say cin instead of std::cin
using std::cout;  // This allows us to say cout instead of std::cout
using std::endl;  // This allows us to say endl instead of std::endl
                  //   endl is a cross-platform alternative to "\n"


int main() {

  // Declare a variable called number_of_turtles.
  //   Its type is int.
  //   Its initial value is -1.
  int number_of_turtles{-1};

  // Check the value of number_of_turtles
  //
  // If the value is not 4, run the body of the loop
  while (number_of_turtles != 4) {

    // Prompt the user.
    // Prompting means printing a message that asks the user for input
    cout << "Please enter a number of turtles: ";

    // Read a value from the user
    //
    // If this operation succeeds,
    //   the value is stored in the number_of_turtles variable
    cin >> number_of_turtles; // returns cin

    // while (cin >> x)
    // while (cin)
    // while (bool{cin})

    
    if (bool{cin} == true) {  // This is a more verbose way of saying if (cin)
    
      if (number_of_turtles < 0) {
	cout << "That's not a valid number of turtles" << endl;
      } else if (number_of_turtles < 4) {
	cout << "Do you keep them at home?" << endl;
      } else if (number_of_turtles > 8 or number_of_turtles == 4) {
	cout << "You have " << number_of_turtles << " turtles" << endl;
      } else {
	cout << "Cool!" << endl;
      }

    } else {
      
      cout << "Something went wrong" << endl;
      break; // This will cause us to exit the loop

    }
    
  }

  if (number_of_turtles == 4) {
    cout << "Do they like pizza?" << endl;
  }
  
  return 0;
}
