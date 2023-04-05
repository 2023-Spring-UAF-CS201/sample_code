
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


int main() {



  return 0;
}
