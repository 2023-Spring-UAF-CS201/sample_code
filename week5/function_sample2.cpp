#include <iostream>
#include <vector>
#include <string>

#include "join.h"

using std::cout;
using std::endl;
using std::vector;
using std::string;


string join(vector<string> words);

int main() {

  vector<string> words{"in", "the", "park"};
  cout << join(words) << endl;
  
  return 0;
}



std::string join(std::vector<std::string> words) {

  std::string result;

  for (std::string word : words) {
    result += word;
  }

  return result;
}


