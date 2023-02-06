#include <iostream>

using std::cout;


int main() {

  double pi{3.74};

  
  // Attempt 1:
  
  int x(pi);
  
  // This is the unsafe old-school way of converting a double to an int.
  //
  // Note the parentheses instead of the curly braces.
  //
  // C++ will happily chop off the decimal points, and won't warn you.



  // Attempt 2: 
  
  int y{pi};
  
  // This is the modern way of creating an int from a double.
  //
  // C++ will do what you ask, but will warn you.


  
  // Attempt 3
  
  int z{static_cast<int>(pi)};

  // This is the best way to create a double from an int.
  //
  // By using static_cast<int>, you are explicitly telling C++
  //    
  //    "I am intentionally converting a double to an int"


  
  cout << pi << " vs " << x << " " << y << " " << z << "\n";
  
  return 0;
}
