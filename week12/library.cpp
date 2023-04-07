
// #include tells the compiler that we need access to code
// that is in another file

// If we use angle brackets, such as <iostream>,
// that tells the compiler to look for the other code
// wherever the operating system stores its libraries

#include <iostream>  // get std::cout

using std::cout;
using std::endl;

// If we use double quotes, such as "Author.h",
// that tells the compiler to look for the other code
// in the current directory

#include "Author.h"
#include "Book.h"

#include "helper_functions.h"


int main() {

  Author author1("John", "Doe");
  Author author2("Jane", "Smith");
  Author author3("Mark", "Twain");

  //  author1.firstName = "Bob";
  cout << author3.getFirstName() << endl;
  
  Book a_tale_of_two_cities;
  Book oliver_twist;
  
  return 0;
}
