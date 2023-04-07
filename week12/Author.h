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

  // There exists a constructor for this class that takes two strings as parameters
  Author(std::string first, std::string last);


  // There exists a getFirstName method that returns a string (and it won't change the object)
  std::string getFirstName() const;


  // There exists a getLastName method that returns a string (and it won't change the object)
  std::string getLastName() const

  
private:
  std::string firstName;
  std::string lastName;
};

