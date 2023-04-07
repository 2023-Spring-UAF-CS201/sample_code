#include "Author.h"


// This is the how
//
// This constructor store the values in the member variables
Author::Author(std::string first, std::string last) {
  firstName = first;
  lastName = last;
}


// the keyword const here
// indicates a binding promise to the compiler
// that calling this method
// will *not* change the value
// of any of this object's member variables
std::string Author::getFirstName() const {
  return firstName;
}

std::string Author::getLastName() const {
  return lastName;
}
