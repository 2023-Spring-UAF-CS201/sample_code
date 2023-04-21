#include <iostream>

using std::cout;
using std::cerr;
using std::endl;

int AK = 49;  // This variable has *global* scope

class Library {

public:

  Library() {
    cerr << "Calling Library() default constructor" << endl;
  }

  Library(const Library& original) {
    cerr << "Calling Library copy constructor" << endl;
  }
  
  ~Library() {
    cerr << "Library object went out of scope, and now doesn't exist" << endl;
  }

};


int booksInLibrary(Library& bob) {


  return 27050;
}

int main() {

  // Scope describes where an object exists
  
  Library library;
  // add a bunch of books

  int x = booksInLibrary(library);


  for (int z{0}; z < 10; z += 1) {

    cout << z << endl;

  }

  // cout << z;  z is *not* in scope here
  
  
  return 0;
}
