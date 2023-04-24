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
    if (s.size() > longest_so_far.size()) {
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

  //  string s = longest_string(students);
  //
  // cout << s << endl;
  
  return 0;
}
