
// #include tells the compiler that we need access to code
// that is in another file

// If we use angle brackets, such as <iostream>,
// that tells the compiler to look for the other code
// wherever the operating system stores its libraries

#include <iostream>  // get std::cout


// If we use double quotes, such as "Author.h",
// that tells the compiler to look for the other code
// in the current directory

#include "Author.h"
#include "Book.h"

#include "helper_functions.h"

int main() {

  Author author1;
  Author author2;
  Author author3;

  Book a_tale_of_two_cities;
  Book oliver_twist;

  return 0;
}
