#include <string>  // This gives us access to std::string

using std::string; // This allows us to write string instead of std::string


int main() {

  // Integers are counting numbers
  //
  // Examples of integers include 0, 1, 2, and -15
  int x1{17};
  int x2{0};
  int x3{1};
  int x4{2};
  int x5{-15};

  // Doubles are double-precision floating point numbers
  //
  // Examples of doubles include 0.0, 1.0, 2.0, 3.14, and -15.0
  double y1{17.0};
  double y2{0.0};
  double y3{1.34233953};
  double y4{3.14};
  double y5{-15.5};

  // Characters represent single elements of a string
  //
  // Examples of characters include 'a', '4', 'x', ' ', ';', and 'b'
  char c1{'a'};
  char c2{'4'};
  char c3{'x'};
  char c4{' '};
  char c5{';'};
  char c6{'b'};

  // Boolean values represent a binary value.
  //
  // Examples of boolean values are true and false.
  //
  // Some C++ code may use 0 and 1 instead of true and false.
  bool b1{true};
  bool b2{false};

  // Strings are a complex type
  //
  // String literals are enclosed in double quotation marks
  string s1{"Hello, world"};
  string s2{" "};
  string s3{"Jane"};
  string s4{"4"};
  string s5{"a"};
  
  return 0;
}
