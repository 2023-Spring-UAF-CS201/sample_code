#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

string longest_string(vector<string> strings) {

  string longest_so_far{""};
  
  for (string s : strings) {

    // In the following line, we need a > operator
    //
    // If we incorrectly use a < operator instead,
    //   that constitutes a logic error.
    //
    // The logic of my steps is incorrect.
    if (s.size() < longest_so_far.size()) {
      longest_so_far = s;
    }
  }

  return longest_so_far;
}

int main() {

  vector<string> students{"Amy",
			  "Bob", "Charlie", "David",
			  "Emily"};
  cout << longest_string(students) << endl;

  
  vector<string> fruit{"apple", "banana", "guava", "pineapple"};
  cout << longest_string(fruit) << endl;

  
  return 0;
}
