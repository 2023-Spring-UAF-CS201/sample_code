#include <iostream>
#include <string>

using std::string;

class SpringBreak {

public:
  
  string name;
  string description;
  bool worked;

  // default constructor
  SpringBreak() {
    name = "Jane Q. Student";
    description = "Caught up on sleep";
    worked = false;
  }


};


// A *class* is a custom data type
//
// An *object* is an instance of that class
//
// The *type* of an object is the associated class

int main() {

  //  std::string hello{"Hi there"};

  SpringBreak what_she_did; // Creates an *instance* of the SpringBreak type, and gives it a name
  
  std::cout << what_she_did.description << std::endl;

  //  what_she_did.name = "Billy Bob Thornton";
  
  return 0;
}
