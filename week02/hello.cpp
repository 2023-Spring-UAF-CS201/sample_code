//  #include "std_lib_header.h"  I recommend not to use this.

#include <iostream>  // This provides std::cin and std::cout
#include <string>    // This provides std::string
#include <vector>    // This provides std::vector

// using namespace std; // Don't do this

using std::cout;     // This means you can type cout instead of std::cout
using std::cin;      // This means you can type cin instead of std::cin
using std::string;   // This means you can type string instead of std::string
using std::vector;   // This means you can type vector instead of std::vector

void donothing() {
  // lallalalaa
}

int main()
{

  int x = 7;
  
  std::cout << "Hello, world\n"    /* comment */
       << "something else\n";

  return 0;
}
