#include <string>

// It is generally bad practice to use
//   any using statements in a header file.
//
// Why?
//
// Because now string (meaning std::string)
//  is in the namespace of any file
//  that includes this header.
//
// using std::string;

class Author {
public:

  Author(std::string first, std::string last) {
    firstName = first;
    lastName = last;
  }

  // the keyword const here
  // indicates a binding promise to the compiler
  // that calling this method
  // will *not* change the value
  // of any of this object's member variables
  std::string getFirstName() const {
    return firstName;
  }

  std::string getLastName() const {
    return lastName;
  }
  
private:
  std::string firstName;
  std::string lastName;
};

