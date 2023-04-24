#include <iostream>

using std::cout;
using std::endl;


int main() {

 
  int j{-7};

  j = 11;

  j = 5 + j + 10;

  j = j + 1;

  cout << "j is " << j << endl;

  int largest{-1};
  int smallest{10000000};
  
  for (int i{0}; i < 5; i=i+1) {

    cout << i << endl;

    if (i > largest) {
      largest = i;
    }

    if (i < smallest) {
      smallest = i;
    }
    
  }

  // 1) Run the code before the first semicolon (int i{0})
  // 2) Check the condition (i < 5)
  // 3) a) if the condition is true, run the body of the loop
  //    b) if the condition is false, exit the loop
  // 4) Run the code after the second semicolon (i=i+1)
  // 5) Return to step 2
  
  return 0;
}
