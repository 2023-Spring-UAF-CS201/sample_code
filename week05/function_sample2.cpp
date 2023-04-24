#include <iostream>
#include <vector>
#include <string>

#include "join.h"

using std::cout;
using std::endl;
using std::vector;
using std::string;

string join(vector<string> joins_words) {

  // vector<string> joins_words{mains_words};
  
  std::string result;

  for (std::string word : joins_words) {
    result += word;
  }

  return result;
}


int main() {

  vector<string> mains_words{"in", "the", "park"};


  
  //  string result_from_join = join(mains_words);

  string result_from_join{ join(mains_words) };

  cout << result_from_join << endl;

  cout << join(mains_words) << endl;

  join(17);
  
  return 0;
}





