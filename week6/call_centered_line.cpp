#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;


string centered_line(char c, int width, char p, int padding) {

  string result;

  // Does something
  result = "My cool correct amazing result";

  return result;
}


int main() {

  cout << centered_line('*', 7, '_', 3) << endl;

  char middle_char;
  cin >> middle_char;

  string this_result{ centered_line(middle_char, 7, '_', 3) };

  cout << this_result << endl;
  
}
