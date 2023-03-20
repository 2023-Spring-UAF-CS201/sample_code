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

  // constructor
  SpringBreak(string n, string d, bool w) {
    name = n;
    description = d;
    worked = w;
  }

};


// A *class* is a custom data type
//
// An *object* is an instance of that class
//
// The *type* of an object is the associated class

int main() {

  //  std::string hello{"Hi there"};

  SpringBreak lane{"Lane Schwartz", "Cleaned the house", true};
  
  SpringBreak what_she_did; // Creates an *instance* of the SpringBreak type, and gives it a name
  
  std::cout << what_she_did.description << std::endl;

  std::cout << lane.name << "\n" << lane.description << "\n" << lane.worked << "\n";
  
  //  what_she_did.name = "Billy Bob Thornton";
  
  return 0;
}
